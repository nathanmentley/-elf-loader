
//
//  Processor.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <future>
#include <memory>

#include <Hypervisor/hv.h>
#include <Hypervisor/hv_vmx.h>

#include "../Core/Exceptions/ProcessorBinaryShutdownException.h"
#include "../Core/Exceptions/ProcessorBinaryStartupException.h"
#include "../Core/Exceptions/ProcessorStartupException.h"
#include "../Core/IProcessor.h"

namespace Hypervisor
{
    /**
     * A class containing data and information related to an Elf64 binary
     */
    class Processor: public Core::IProcessor {
        public:
            ~Processor()
            {
                if (hv_vcpu_destroy(vcpu))
                    {}//throw Core::Exceptions::ProcessorBinaryShutdownException();

                /*
                if (hv_vm_unmap(0, memsize))
                    throw Core::Exceptions::ProcessorBinaryShutdownException();
                */

                if (hv_vm_destroy())
                    {}//throw Core::Exceptions::ProcessorBinaryShutdownException();
            }

            IProcessor* loadBinary(Core::IBinary* binary)
            {
                binary->printDetails();

                for(auto blob: binary->getBinaryBlobs())
                {
                    auto memory = valloc(blob.length);
                    memcpy(memory, binary->getBinaryData() + blob.source, blob.length);

                    //TODO: Setup Flags
                    //TODO: Free this on shutdown

                    if (
                        hv_vm_map(
                            memory,
                            blob.target,
                            blob.length,
                            HV_MEMORY_READ | HV_MEMORY_WRITE | HV_MEMORY_EXEC
                        )
                    ) throw Core::Exceptions::ProcessorBinaryStartupException();
                }


                return this;
            }

            std::future<int> runAsync(Core::IKernel* kernel)
            {
                return std::async(std::launch::async, &Processor::run, this, kernel);
            }

            int run(Core::IKernel* kernel)
            {
                bool stop = false;
                while (!stop)
                {
                    if (hv_vcpu_run(vcpu)) {
                    }
                    stop = true;
                }

                return 0;
            }
        private:
            friend class Loader; 

            hv_vcpuid_t vcpu;
            uint64_t vmx_cap_pinbased, vmx_cap_procbased, vmx_cap_procbased2, vmx_cap_entry;

            Processor()
            {
                /* create a VM instance for the current task */
                if (hv_vm_create(HV_VM_DEFAULT))
                    throw Core::Exceptions::ProcessorStartupException();
                
                /* get hypervisor enforced capabilities of the machine, (see Intel docs) */
                if (hv_vmx_read_capability(HV_VMX_CAP_PINBASED, &vmx_cap_pinbased))
                    throw Core::Exceptions::ProcessorStartupException();
                if (hv_vmx_read_capability(HV_VMX_CAP_PROCBASED, &vmx_cap_procbased))
                    throw Core::Exceptions::ProcessorStartupException();
                if (hv_vmx_read_capability(HV_VMX_CAP_PROCBASED2, &vmx_cap_procbased2))
                    throw Core::Exceptions::ProcessorStartupException();
                if (hv_vmx_read_capability(HV_VMX_CAP_ENTRY, &vmx_cap_entry))
                    throw Core::Exceptions::ProcessorStartupException();

                if (hv_vcpu_create(&vcpu, HV_VCPU_DEFAULT))
                    throw Core::Exceptions::ProcessorStartupException();
            }

            static std::future<std::unique_ptr<Processor>> createAsync()
            {
                return std::async(create);
            }

            static std::unique_ptr<Processor> create()
            {
                return std::unique_ptr<Processor>(new Processor());
            }

            static void free_memory(void* mem)
            {
                free(mem);
            }
    };
}