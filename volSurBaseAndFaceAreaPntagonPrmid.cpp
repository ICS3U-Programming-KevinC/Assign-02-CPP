// Copyright (c) 2022 Kevin Csiffary All rights reserved.
//
// Created by: Kevin Csiffary
// Date: Oct. 3, 2022
// This program calculates the, volume, surface area, base area, and face area
// of a pentagonal pyramid

// include all required libraries
#include <iostream>
#include <cmath>



int main() {
    // initialize variables
    std::string units;
    float height;
    float baseLength;
    float volume;
    float faceArea;
    float baseArea;
    float surfaceArea;

    // set all of the variables to user input
    std::cout << "What units are you using? ";
    std::cin >> units;
    std::cout << "What is the height of your pentagonal pyramid? ";
    std::cin >> height;
    std::cout
    << "What is the length of one base segment of your pentagonal pyramid? ";
    std::cin >> baseLength;

    // calculate volume, surface area, base area, and face area
    volume = ((static_cast<float>(5) / static_cast<float>(12)) *
    tan(static_cast<float>(54) * (M_PI / static_cast<float>(180))) *
    height * pow(baseLength, static_cast<float>(2)));

    faceArea = ((baseLength / static_cast<float>(2)) * sqrt(pow(
    height, static_cast<float>(2)) + pow(
    ((baseLength * tan(static_cast<float>(54) *
    (M_PI / static_cast<float>(180)))) / static_cast<float>(2)),
    static_cast<float>(2))));

    baseArea = ((static_cast<float>(5) / static_cast<float>(4)) *
    tan(static_cast<float>(54) * (M_PI / static_cast<float>(180))) *
    pow(baseLength, static_cast<float>(2)));

    surfaceArea = (baseArea + static_cast<float>(5) * faceArea);

    // add extra line
    std::cout << std::endl;

    // displays volume, surface area, base area, and face area
    std::cout << "The volume of your pentagonal pyramid is "
    << volume << units << "³\n";
    std::cout << "The surface area of your pentagonal pyramid is "
    << surfaceArea << units << "²\n";
    std::cout << "The face area of your pentagonal pyramid is "
    << faceArea << units << "²\n";
    std::cout << "The base area of your pentagonal pyramid is "
    << baseArea << units << "²\n";
}
