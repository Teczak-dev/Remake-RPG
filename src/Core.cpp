#include <iostream>
#include "../include/Terminal.hpp" 
#include "../include/Characters/Player.hpp"
/* 
void clearScreen(); 
void setConsoleColor(int colorCode);
void resetColors();
*/
bool isGame = true;
Player* player = nullptr;

void GameStart();
void NewGame();
void LoadGame();

void GameLoop() {
    clearScreen();
    GameStart();
    while (isGame) {
        clearScreen();
        std::cout << "Game is running... write quit to exit" << std::endl;
        std::string command;
        std::cin >> command;
        if (command == "quit") {
            isGame = false;
        }
    }
    delete player;
}


void GameStart() {
    clearScreen();
    while(true){
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Load Game" << std::endl;
        std::cout << "2. New Game" << std::endl;
        std::string command;
        std::cin >> command;
        if (command == "1") {
            LoadGame();
            break;
        } else if (command == "2") {
            NewGame();
            break;
        } else {
            std::cout << "Invalid option, starting new game by default." << std::endl;
        }
    }
}

void NewGame() {
    clearScreen();
    std::cout << "Selected New Game!" << std::endl;
    player = new Player("Hero");
}
void LoadGame() {
    clearScreen();
    std::cout << "Selected Load Game!" << std::endl;
    std::cout << "No saved file" << std::endl;
}
