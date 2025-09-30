#include <iostream>
#include "../include/Terminal.hpp"

bool mainMenu() {
    clearScreen();
    setConsoleColor(15);
    while (true)
    {
        std::cout << "************************************************" << std::endl;
        std::cout << "*                                              *" << std::endl;
        std::cout << "*        Medieval Life Simulator REMAKE        *" << std::endl;
        std::cout << "*                                              *" << std::endl;
        std::cout << "*              1 - Start Game                  *" << std::endl;
        std::cout << "*                                              *" << std::endl;
        std::cout << "*              2 - Quit                        *" << std::endl;
        std::cout << "*                                              *" << std::endl;
        std::cout << "************************************************" << std::endl;
        std::cout << "Select an option: ";
        std::string* userInput = new std::string;
        std::cin >> *userInput;

        if (*userInput == "1") {
            delete userInput;
            return true;
        }
        else if (*userInput == "2") {
            delete userInput;
            return false;
        }
        else {
            std::cout << "Invalid input. Please try again." << std::endl;
        }

        delete userInput;  
    
    }
    resetColors(); // Reset na końcu
}