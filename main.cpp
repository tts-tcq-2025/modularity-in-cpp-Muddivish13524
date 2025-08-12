#include <iostream>
#include "ColorPair.h"
#include "ColorCodingManual.h"
#include "ColorCoderTests.h"

int main() {
    // Print the color coding reference manual
    std::cout << TelCoColorCoder::FormatColorCodingManual() << std::endl;

    TestColorMapper();
    TestColorCodingManual();

    std::cout << "All tests passed successfully!\n";

    return 0;
}
