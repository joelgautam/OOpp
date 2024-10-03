#include <iostream>
#include <string>
#include <stdexcept>

int binaryToDecimal(const std::string& binaryNumber) {
    int decimalNumber = 0;
    int base = 1;

    // Validate the input binary number
    for (char c : binaryNumber) {
        if (c != '0' && c != '1') {
            throw std::invalid_argument("Invalid binary number. Please enter a number consisting only of 0s and 1s.");
        }
    }

    // Convert binary to decimal
    for (int i = binaryNumber.size() - 1; i >= 0; i--) {
        if (binaryNumber[i] == '1') {
            decimalNumber += base;
        }
        base *= 2;
    }

    return decimalNumber;
}
