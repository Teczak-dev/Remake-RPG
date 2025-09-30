#include <iostream>
#ifdef _WIN32
    #include<windows.h>
#else
    #include<unistd.h>
    #include<termios.h>
#endif

void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        // Używamy ANSI escape codes zamiast system("clear") aby zachować kolory
        std::cout << "\033[2J\033[H" << std::flush;
    #endif
}

void resetColors() {
    #ifdef _WIN32
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); // White on black
    #else
        std::cout << "\033[0m" << std::flush;
    #endif
}

void setConsoleColor(int colorCode) {
    #ifdef _WIN32
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorCode);
    #else
        // Mapowanie kolorów Windows na kody ANSI
        switch(colorCode) {
            case 1:  // FOREGROUND_BLUE
                std::cout << "\033[34m";
                break;
            case 2:  // FOREGROUND_GREEN
                std::cout << "\033[32m";
                break;
            case 3:  // FOREGROUND_GREEN | FOREGROUND_BLUE (Cyan)
                std::cout << "\033[36m";
                break;
            case 4:  // FOREGROUND_RED
                std::cout << "\033[31m";
                break;
            case 5:  // FOREGROUND_RED | FOREGROUND_BLUE (Magenta)
                std::cout << "\033[35m";
                break;
            case 6:  // FOREGROUND_RED | FOREGROUND_GREEN (Yellow)
                std::cout << "\033[33m";
                break;
            case 7:  // FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE (White)
                std::cout << "\033[37m";
                break;
            case 8:  // FOREGROUND_INTENSITY (Bright Black/Gray)
                std::cout << "\033[90m";
                break;
            case 9:  // FOREGROUND_BLUE | FOREGROUND_INTENSITY (Bright Blue)
                std::cout << "\033[94m";
                break;
            case 10: // FOREGROUND_GREEN | FOREGROUND_INTENSITY (Bright Green)
                std::cout << "\033[92m";
                break;
            case 11: // FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY (Bright Cyan)
                std::cout << "\033[96m";
                break;
            case 12: // FOREGROUND_RED | FOREGROUND_INTENSITY (Bright Red)
                std::cout << "\033[91m";
                break;
            case 13: // FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY (Bright Magenta)
                std::cout << "\033[95m";
                break;
            case 14: // FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY (Bright Yellow)
                std::cout << "\033[93m";
                break;
            case 15: // FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY (Bright White)
                std::cout << "\033[97m";
                break;
            default:
                std::cout << "\033[0m"; // Reset
                break;
        }
        std::cout.flush();
    #endif
}
