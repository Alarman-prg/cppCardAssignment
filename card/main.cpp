// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include <time.h>
#include <string>

#include <iostream>

#include "card.h"

int main(int argc, char** argv) {
    int index = 0;
    srand(time(NULL));

    // init
    card deck[5];

    // printing info
    std::cout << "Index" << std::endl;
    std::cout << "______" << std::endl;
    for (int i = 0; i <= 4; i++) {
        std::cout << "Card " << i << ": ";
        deck[i].printCard();
        std::cout << std::endl;
    }

    // Default: ALL TESTS ARE SET FOR THE FIRST AND SECOND CARDS IN THE DECK
    std::cout << "Default: ALL TESTS ARE SET FOR THE FIRST AND SECOND CARDS IN THE DECK" << std::endl << std::endl;

    // suit equality test
    deck[0].equalSuitTest(deck[1]);

    // value equality test
    deck[0].equalValueTest(deck[1]);

    // value greater-than (>) test
    deck[0].greaterTest(deck[1]);

    //value less-than (<) test
    deck[0].lessTest(deck[1]);

    return 0;
}