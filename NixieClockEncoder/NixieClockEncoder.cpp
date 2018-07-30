// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void digitalWrite(int pin, bool value) {
	//dummy function doesn't do anything
	return;
}


char* encodeTimeToBinary(int time) {
	//takes in HH or MM or SS and returns char* 8 bits in binary
	char* binaryTime=NULL;

	return binaryTime;
}

void setPinsWithEncodedTime(int *time, int size) {
	//pinmapping pins 0through 7
	//FIRST - D = 0, C = 1, B = 2, A = 3
	//LAST  - E = 4, F = 5, G = 6, H = 7

	/*
	EFGH
	DCBA
	0000 - 0
	0001 - 1
	0010 - 2
	0011 - 3
	0100 - 4
	0101 - 5
	0110 - 6
	0111 - 7
	1000 - 8
	1001 - 9
	*/

	int firstbits[4] = { 0,0,0,0 };
	int lastbits[4] = {0,0,0,0};
	int j = 4;
	for (int i = 0; i < 4; i ++,j++) {
		firstbits[i] = time[i];//copy first time bits into array
		lastbits[i] = time[j]; //copy last time bits into array
	}


}

void writeZero(int pinSelect) {
	if (pinSelect == 0) {
		digitalWrite(0, false);
		digitalWrite(1, false);
		digitalWrite(2, false);
		digitalWrite(3, false);
	}
	else {
		digitalWrite(4, false);
		digitalWrite(5, false);
		digitalWrite(6, false);
		digitalWrite(7, false);
	}
}
void writeOne(int pinSelect) {
	if (pinSelect == 0) {
		digitalWrite(0, false);
		digitalWrite(1, false);
		digitalWrite(2, false);
		digitalWrite(3, true);
	}
	else {
		digitalWrite(4, false);
		digitalWrite(5, false);
		digitalWrite(6, false);
		digitalWrite(7, true);
	}
}
void writeTwo(int pinSelect) {
	if (pinSelect == 0) {
		digitalWrite(0, false);
		digitalWrite(1, false);
		digitalWrite(2, true);
		digitalWrite(3, false);
	}
	else {
		digitalWrite(4, false);
		digitalWrite(5, false);
		digitalWrite(6, true);
		digitalWrite(7, false);
	}
}
void writeThree(int pinSelect) {
	if (pinSelect == 0) {
		digitalWrite(0, false);
		digitalWrite(1, false);
		digitalWrite(2, true);
		digitalWrite(3, true);
	}
	else {
		digitalWrite(4, false);
		digitalWrite(5, false);
		digitalWrite(6, true);
		digitalWrite(7, true);
	}
}
void writeFour(int pinSelect) {
	if (pinSelect == 0) {
		digitalWrite(0, false);
		digitalWrite(1, true);
		digitalWrite(2, false);
		digitalWrite(3, false);
	}
	else {
		digitalWrite(4, false);
		digitalWrite(5, true);
		digitalWrite(6, false);
		digitalWrite(7, false);
	}
}
void writeFive(int pinSelect){
	if (pinSelect == 0) {
		digitalWrite(0, false);
		digitalWrite(1, true);
		digitalWrite(2, false);
		digitalWrite(3, true);
	}
	else {
		digitalWrite(4, false);
		digitalWrite(5, true);
		digitalWrite(6, false);
		digitalWrite(7, true);
	}
}
void writeSix(int pinSelect) {
	if (pinSelect == 0) {
		digitalWrite(0, false);
		digitalWrite(1, true);
		digitalWrite(2, true);
		digitalWrite(3, false);
	}
	else {
		digitalWrite(4, false);
		digitalWrite(5, true);
		digitalWrite(6, true);
		digitalWrite(7, false);
	}
}
void writeSeven(int pinSelect) {
	if (pinSelect == 0) {
		digitalWrite(0, false);
		digitalWrite(1, true);
		digitalWrite(2, true);
		digitalWrite(3, true);
	}
	else {
		digitalWrite(4, false);
		digitalWrite(5, true);
		digitalWrite(6, true);
		digitalWrite(7, true);
	}
}
void writeEight(int pinSelect) {
	if (pinSelect == 0) {
		digitalWrite(0, true);
		digitalWrite(1, false);
		digitalWrite(2, false);
		digitalWrite(3, false);
	}
	else {
		digitalWrite(4, true);
		digitalWrite(5, false);
		digitalWrite(6, false);
		digitalWrite(7, false);
	}
}
void writeNine(int pinSelect) {
	if (pinSelect == 0) {
		digitalWrite(0, true);
		digitalWrite(1, false);
		digitalWrite(2, false);
		digitalWrite(3, true);
	}
	else {
		digitalWrite(4, true);
		digitalWrite(5, false);
		digitalWrite(6, false);
		digitalWrite(7, true);
	}
}

int main()
{
	int testBitString[8] = { 0,1,2,3,4,5,6,7 };

	setPinsWithEncodedTime(testBitString, 8);
	return 0;
}

