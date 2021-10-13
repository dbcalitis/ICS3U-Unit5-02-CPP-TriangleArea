// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Oct 2021
// This program calculates the area of a triangle

#include <iostream>
#include <string>

void CalculateArea(float baseLength, float height) {
    // This function calculates the area of a triangle
    // process
    float areaOfTriangle = (baseLength * height) / 2;

    // output
    printf("\nThe area of the triangle is %.1f cm²\n", areaOfTriangle);
}

int main() {
    // This function is the main function
    std::string lengthInputString;
    std::string heightInputString;
    float lengthInput;
    float heightInput;

    // input
    std::cout << "Enter the base length of a triangle (cm): ";
    std::cin >> lengthInputString;
    std::cout << "Enter the height of a triangle (cm): ";
    std::cin >> heightInputString;

    // process
    try {
        lengthInput = std::stof(lengthInputString);
        heightInput = std::stof(heightInputString);

        // call function
        CalculateArea(lengthInput, heightInput);
    } catch(...) {
        std::cout << "\nInvalid Input." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
