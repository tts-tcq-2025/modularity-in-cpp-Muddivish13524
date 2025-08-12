#include <iostream>
#include <assert.h>
#include <string>
#include "ColorData.h"
#include "ColorCodingManual.h"
#include "ColorCoderTests.h"

void TestColorMapper() 
{
    TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(4);
    assert(colorPair.getMajor() == TelCoColorCoder::WHITE);
    assert(colorPair.getMinor() == TelCoColorCoder::BROWN);
    
    assert(TelCoColorCoder::GetPairNumberFromColor(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE) == 12);
    std::cout << "✓ Color mapper tests passed\n";
}

void TestColorCodingManual() 
{
    std::string manual = TelCoColorCoder::FormatColorCodingManual();
    assert(manual.find("Pair Number | Major Color | Minor Color") != std::string::npos);
    assert(manual.find("White") != std::string::npos);
    assert(manual.find("Violet") != std::string::npos);
    std::cout << "✓ Reference manual tests passed\n";
}
