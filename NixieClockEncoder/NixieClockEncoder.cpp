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

void writeZero() {
	digitalWrite(0, true);
	digitalWrite(0, true);
	digitalWrite(0, true);
	digitalWrite(0, true);
}
void writeOne() {

}
void writeTwo() {

}
void writeThree() {

}
void writeFour() {

}
void writeFive(){

}
void writeSix() {

}
void writeSeven() {

}
void writeEight() {

}
void writeNine() {

}

int main()
{
	int testBitString[8] = { 0,1,2,3,4,5,6,7 };

	setPinsWithEncodedTime(testBitString, 8);
	return 0;
}

