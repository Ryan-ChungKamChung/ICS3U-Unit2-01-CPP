// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in November 2020
// Circumference and area of a circle with 15mm radius

#include <iostream>
#include <cmath>

int main() {
    std::cout << "The circumference of a circle with a radius of 15mm is: " << std::endl;
    std::cout << 2*M_PI*15 << "mm" << std::endl;
    std::cout << "The area of a circle with a radius of 15mm is: " << std::endl;
    std::cout << (pow(15, 2)*M_PI) << "mm^2" << std::endl;
}