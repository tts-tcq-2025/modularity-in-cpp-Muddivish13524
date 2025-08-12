#include "ColorPair.h"
#include "ColorCodingManual.h"
#include <sstream>

namespace TelCoColorCoder
{
    std::string FormatTableHeader() {
        std::ostringstream header;
        header << "\n=== Color Coding Reference Manual ===\n";
        header << "Pair Number | Major Color | Minor Color\n";
        header << "------------|-------------|------------\n";
        return header.str();
    }

    std::string FormatPairEntry(int pairNumber) {
        const ColorPair colorPair = GetColorFromPairNumber(pairNumber);
        std::ostringstream entry;
        entry << "    " << pairNumber;
        
        const int singleDigitThreshold = 10;
        if (pairNumber < singleDigitThreshold) {
            entry << " ";
        }
        
        entry << "      | " << MajorColorNames[colorPair.getMajor()]
              << "       | " << MinorColorNames[colorPair.getMinor()] 
              << "\n";
        return entry.str();
    }

    std::string FormatTableFooter(int totalPairs) {
        std::ostringstream footer;
        footer << "\nTotal pairs: " << totalPairs << "\n";
        return footer.str();
    }

    std::string FormatColorCodingManual() {
        std::ostringstream manual;
        const int totalPairs = numberOfMajorColors * numberOfMinorColors;
        
        manual << FormatTableHeader();
        
        for (int pairNumber = 1; pairNumber <= totalPairs; ++pairNumber) {
            manual << FormatPairEntry(pairNumber);
        }
        
        manual << FormatTableFooter(totalPairs);
        return manual.str();
    }
}
