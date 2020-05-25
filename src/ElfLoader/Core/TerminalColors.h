//
//  TerminalColors.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <sstream>
#include <string>

namespace Core
{
    class TerminalColors
    {
        public:
            template <typename TReportable>
            static std::string WithErrorFormatting(TReportable message)
            {
                return WithFormatting(ErrorFormatting, message);
            }

            template <typename TReportable>
            static std::string WithInfoFormatting(TReportable message)
            {
                return WithFormatting(InfoFormatting, message);
            }

            static const char* ErrorFormatting;
            static const char* InfoFormatting;
            static const char* ClearFormatting;
        private:
            template <typename TReportable>
            static std::string WithFormatting(const char* format, TReportable message)
            {
                std::stringstream ss;

                ss << format
                    << message
                    << ClearFormatting;

                return ss.str();
            }
    };
}