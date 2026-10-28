//
// Created by Jib on 28.10.2026.
//
#include <iostream>
#include "promptUser.h"

// Prompt l'utilisateur pour un nombre entre un min et un max
int promptUserRange(std::string prompt, std::string errorMessage, int min, int max) {
    int date = min+1;
    do {
        // affiche le message dans le cas ou l'entrée est fausse
        if (date < min || date > max) {std::cout << errorMessage << std::endl;}
        std::cout << prompt;
        std::cin >> date;

    }while (date < min || date > max);
    return date;
}

bool promptUserYN(std::string prompt) {
    char answer;
    do {
        std::cout << prompt;
        std::cin >> answer;
    }while (answer != 'o' && answer != 'O' && answer != 'n' && answer != 'N');
    return answer=='o'||answer=='O';
}
