#pragma once

#include <string>

namespace TelCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    extern const char* const MajorColorNames[];
    extern const int numberOfMajorColors;
    extern const char* const MinorColorNames[];
    extern const int numberOfMinorColors;

    class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            explicit ColorPair(MajorColor major, MinorColor minor);
            MajorColor getMajor() const;
            MinorColor getMinor() const;
            std::string ToString() const;
    };

    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}
