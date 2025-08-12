#pragma once   
#include <string>

namespace TelCoColorCoder
{   
    // Manual formatting functions (testable components)
    std::string FormatTableHeader();
    std::string FormatPairEntry(int pairNumber);
    std::string FormatTableFooter(int totalPairs);
    std::string FormatColorCodingManual();
}
