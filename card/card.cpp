#include <stdlib.h>
#include <string>

#include <iostream>
#include "card.h"

/* Contructor */
card::card() {
	this->suit = suitGen();
	this->value = valueGen();
}

/* Destructor */
card::~card() {}

/* Generates 0-3 */
int card::suitGen() {
	return rand() % 3;
}

/* Generates 2 - 14 */
int card::valueGen() {
	return rand() % 13 + 2;
}

/* Prints the converted values of a card object or prints error */
void card::printCard() {
	//suit
	if (this->value <= 10 && this->value >= 2) {
		std::cout << this->value << " of ";
	}
	else if (this->value == 11) {
		std::cout << "Jack of ";
	}
	else if (this->value == 12) {
		std::cout << "Queen of ";
	}
	else if (this->value == 13) {
		std::cout << "King of ";
	}
	else if (this->value == 14) {
		std::cout << "Ace of ";
	}
	else {
		std::cout << "Error in valueGen() or valueConvert() ";
	}

	//value
	if (this->suit == 0) {
		std::cout << "Clubs";
	}
	else if (this->suit == 1) {
		std::cout << "Diamonds";
	}
	else if (this->suit == 2) {
		std::cout << "Hearts";
	}
	else if (this->suit == 3) {
		std::cout << "Spades";
	}
	else {
		std::cout << "Error in suitGen() or suitConvert()";
	}
	//complete print.
	std::cout << std::endl;
}

void card::equalSuitTest(card card) {
	std::cout << "equalSuitTest ";
	if (this->suit == card.suit) {
		std::cout << "These cards are the same suit.";
	}
	else {
		std::cout << "These cards are NOT the same suit.";
	}
	std::cout << std::endl;
}

void card::equalValueTest(card card) {
	std::cout << "equalValueTest: ";
	if (this->value == card.value) {
		std::cout << "These cards are the same value.";
	}
	else {
		std::cout << "These cards are NOT the same value.";
	}
	std::cout << std::endl;
}

void card::greaterTest(card card) {
	std::cout << "greaterTest: ";
	if (this->value > card.value) {
		std::cout << "The first card is greater than the second.";
	}
	else {
		std::cout << "The first card is NOT greater than the second.";
	}
	std::cout << std::endl;
}

void card::lessTest(card card) {
	std::cout << "lessTest: ";
	if (this->value < card.value) {
		std::cout << "The first card is less than the second.";
	}
	else {
		std::cout << "The first card is NOT less than the second.";
	}
	std::cout << std::endl;
}