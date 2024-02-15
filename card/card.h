#pragma once

class card {
	int suit, value, index;
public: // constructor/destructor
	card();
	~card();
public: //functions
	int valueGen();
	int suitGen();
	void printCard();
	void equalSuitTest(card card);
	void equalValueTest(card card);
	void greaterTest(card card);
	void lessTest(card card);
};