#pragma once

#include "ColorPair.h"

namespace TelCoColorCoder
{
    // Function declarations for color-number conversion
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}
