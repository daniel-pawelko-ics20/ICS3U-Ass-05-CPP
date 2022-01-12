// Copyright (c) 2022 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Jan 2022
// Multiplication table

#include <iostream>

int main() {
    // main function for multiplication table

    // process/output
    for (int first_num = 0; first_num <= 9; first_num++) {
        for (int second_num = 0; second_num <= 9; second_num++) {
            std::cout << first_num << " x " << second_num << " = ";
            std::cout << first_num * second_num << std::endl;
        }
    }

    // output finished
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
