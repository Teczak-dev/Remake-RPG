#include <iostream>
#include "include/MainMenu.hpp"
#include "include/Core.hpp"

using namespace std;

int main() {
    setlocale(LC_ALL, "Polish");
    bool start = mainMenu();
    if (!start) {
        return 0;
    }
    GameLoop();
    return 0;
}