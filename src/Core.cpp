#include <iostream>
#include "../include/Terminal.hpp" 
#include "../include/characters/Player.hpp"
#include "../include/worldMap/WorldMap.hpp"
/* 
void clearScreen(); 
void setConsoleColor(int colorCode);
void resetColors();
*/
bool isGame = true;
Player* player = nullptr;

void gameStart();
void newGame();
void loadGame();

void GameLoop() {
    clearScreen();
    gameStart();
    WorldMap* wm = new WorldMap();
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
    delete wm;
    std::cout << "Game has ended." << std::endl;
}


void gameStart() {
    clearScreen();
    while(true){
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Load Game" << std::endl;
        std::cout << "2. New Game" << std::endl;
        std::string command;
        std::cin >> command;
        if (command == "1") {
            loadGame();
            break;
        } else if (command == "2") {
            newGame();
            break;
        } else {
            std::cout << "Invalid option, starting new game by default." << std::endl;
        }
    }
}

void newGame() {
    clearScreen();
    std::cout << "Selected New Game!" << std::endl;
    player = new Player("Hero");
}
void loadGame() {
    clearScreen();
    std::cout << "Selected Load Game!" << std::endl;
    std::cout << "No saved file" << std::endl;
}
