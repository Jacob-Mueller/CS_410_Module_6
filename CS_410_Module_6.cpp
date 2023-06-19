// CS_410_Module_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>

int DisplayMenu() {
    std::cout << std::string(30, '-') << std::endl;
    std::cout << "    " << " - 1 Addition - \t" << std::endl;
    std::cout << "    " << " - 2 Subtraction - \t" << std::endl;
    std::cout << "    " << " - 3 Multiplication - \t" << std::endl;
    std::cout << "    " << " - 4 EXIT - \t" << std::endl;
    std::cout << std::string(30, '-') << std::endl;

    return 0;
}

/*
int ScreenClear() {
    for (int i = 0; i < 30; i++) {
        std::cout << "\n";
    }
    return 0;
}
*/

int UserSum(int i, int j) {
    return i + j;
}

int UserDifference(int i, int j) {
    return i - j;
}

int UserProduct(int i, int j) {
    return i * j;
}

int main()
{
    int i = 1;
    int userInput = 0;
    int firstNumber = 0;
    int secondNumber = 0;

    DisplayMenu();

    while (i == 1) {
        std::cout << "User Selection: ";
        std::cin >> userInput;

        if (userInput == 1) {
            std::cout << "\n+ Addition Selected +\n" << std::endl << "Enter first number: ";
            std::cin >> firstNumber;
            std::cout << "Enter second number: ";
            std::cin >> secondNumber;
            std::cout << firstNumber << "+" << secondNumber << "=" << UserSum(firstNumber, secondNumber) << std::endl;
            DisplayMenu();
        }
        else if (userInput == 2) {
            std::cout << "\n- Subtraction Selected -\n" << std::endl << "Enter first number: ";
            std::cin >> firstNumber;
            std::cout << "Enter second number: ";
            std::cin >> secondNumber;
            std::cout << firstNumber << "-" << secondNumber << "=" << UserDifference(firstNumber, secondNumber) << std::endl;
            DisplayMenu();
        }
        else if (userInput == 3) {
            std::cout << "\n* Multiplication Selected *\n" << std::endl << "Enter first number: ";
            std::cin >> firstNumber;
            std::cout << "Enter second number: ";
            std::cin >> secondNumber;
            std::cout << firstNumber << "*" << secondNumber << "=" << UserProduct(firstNumber, secondNumber) << std::endl;
            DisplayMenu();
        }
        else if (userInput == 4) {
            std::cout << "Good-bye...";
            i = 0;
        }
        else {
            std::cout << "uhoh, try again...\n" << std::endl;
            DisplayMenu();
        }
    }
}
