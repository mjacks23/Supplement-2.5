#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <cstdint>
#include <array>

std::array<uint8_t, 4> floatToBytes(float value);


void callFunctionPointer(void (*func)(int), int value);


std::array<uint8_t, 4> extractBytes(double value);

#endif
