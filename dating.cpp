// Copyright (c) 2022 Tamer Zreg All rights reserved.
// .
// Created by: Tamer Zreg
// Date: Oct.18, 2022
// This program decides if you can date someone's grandchild using
// a compound boolean expression

#include <iostream>

int main() {
    // Initializing age variables
    std::string userAge;
    int maxAge = 40;
    int minAge = 25;
    int userAgeNum;

    // Gets the user's age
    std::cout << "Enter your age:\n\n"
              << ">> ";
    std::cin >> userAge;
    std::cout << "\n";

    // Tries to cast user's age to an integer
    try {
        userAgeNum = std::stoi(userAge);

        // Exception thrown if user's age can't be casted to an integer
    } catch (std::invalid_argument) {
        std::cout << "Error\n\n";
        main();
    }

    // Code executed if the user's age is
    // greater than 25 and less than 40
    if (userAgeNum < maxAge && userAgeNum > minAge) {
        std::cout << "Please date my daughter!\n";

        // Code executed if the above conditions are not met
    } else {
        std::cout << "Get lost!\n";
    }
}
