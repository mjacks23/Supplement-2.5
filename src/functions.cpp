#include "functions.h"
#include <iostream>


std::array<uint8_t, 4> floatToBytes(float value) {
    std::array<uint8_t, 4> bytes;
    uint8_t* bytePtr = reinterpret_cast<uint8_t*>(&value);
    for (size_t i = 0; i < 4; i++) {
        bytes[i] = bytePtr[i];
    }
    return bytes;
}


void callFunctionPointer(void (*func)(int), int value) {
    func(value);
}


std::array<uint8_t, 4> extractBytes(double value) {
    std::array<uint8_t, 4> extractedBytes;
    uint8_t* bytePtr = reinterpret_cast<uint8_t*>(&value);
    extractedBytes[0] = bytePtr[0];
    extractedBytes[1] = bytePtr[2];
    extractedBytes[2] = bytePtr[4];
    extractedBytes[3] = bytePtr[6];
    return extractedBytes;
}
