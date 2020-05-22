//
//  ILogger.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <future>
#include <memory>
#include <sstream>

#include <ElfLoader/Core/IPlugin.h>

namespace Core
{
    enum LogLevel
    {
        Info,
        Warning,
        Error,
        Fatal
    };

    class ILogger: public IPlugin
    {
        public:
            virtual void log(const std::string&) = 0;

            virtual ~ILogger() {}
    };

    class Logger
    {
        public:
            Logger(ILogger* _logger):
                logger(std::unique_ptr<ILogger>(_logger)) {}

            std::ostringstream& log(LogLevel level)
            {
                auto temp = LoggerInstance(logger.get());
                return temp.log();
            }

            ~Logger() {}

        private:
            class LoggerInstance
            {
                public:
                    LoggerInstance(ILogger* _logger):
                        logger(_logger) {}

                    virtual std::ostringstream& log()
                    {
                        return stringStream;
                    }

                    virtual ~LoggerInstance() {
                        logger->log(getStream().str());
                    }

                protected:
                    std::ostringstream& getStream()
                    {
                        return stringStream;
                    }

                private:
                    ILogger* logger;
                    std::ostringstream stringStream;
            };

            std::unique_ptr<ILogger> logger;
    }
}