// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on December 2020
// This program determines the cost of a person's order and whether
// they get a discount


#include <iostream>
#include <cmath>

int main() {
    // This function determines the cost of a person's order and whether
    // they get a discount

    std::string quantityStr;
    int quantity;
    double subtotal;
    double total;

    std::cout << "" << std::endl;
    std::cout << "This program calculates the"
          " cost of your order!" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Please enter the number of items you are purchasing: ";
    std::cin >> quantityStr;
    std::cout << "" << std::endl;

    try {
        quantity = std::stoi(quantityStr);

        if (quantity > 0) {
            subtotal = quantity * 100;
            if (subtotal >= 1000) {
                total = subtotal * 0.9 * 1.13;
            } else {
                total = subtotal * 1.13;
            }
            std::cout << "Your subtotal is $" << subtotal << "\n" <<
                  "Your total is $" << total << std::endl;
        } else if (quantity == 0) {
            std::cout << "If you have not purchased anything than you"
                  " have no reason to use this program" << std::endl;
        } else {
            std::cout << "Please put in an actual quantity" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input" << std::endl;
    }
}
