#include <iostream>
#include <cstdlib>
#include <windows.h>

int main() {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    std::cout << "Dan's Garbage Windows 7 Activator" << std::endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    std::cout << "Press Enter to continue activating..." << std::endl;
    std::cin.get(); 

    system("runas /user:administrator \"cmd /c slmgr -rearm\"");

    if (system("echo %errorlevel%") == 0) {

        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        std::cout << "Please reboot and it will activate windows.\n" << std::endl;
        std::cout << "After 30 days you have to reopen this application to activate again." << std::endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
    else {
        std::cout << "Error: Command failed." << std::endl;
    }

    return 0;
}