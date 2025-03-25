#include "functions.h"
#include <iostream>


void sampleFunction(int x) {
    std::cout << "Function called with value: " << x << std::endl;
}

int main() {
   
    float testFloat = 12.34f;
    auto floatBytes = floatToBytes(testFloat);
    std::cout << "Float bytes: ";
    for (uint8_t byte : floatBytes) {
        std::cout << (int)byte << " ";
    }
    std::cout << std::endl;

    
    callFunctionPointer(sampleFunction, 42);

    
    double testDouble = 123.456;
    auto extracted = extractBytes(testDouble);
    std::cout << "Extracted bytes: ";
    for (uint8_t byte : extracted) {
        std::cout << (int)byte << " ";
    }
    std::cout << std::endl;

    return 0;
}
