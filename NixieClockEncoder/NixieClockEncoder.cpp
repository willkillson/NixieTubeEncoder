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

void setPinsWithEncodedTime(char* time) {
	/*
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

	digitalWrite(0,true);

}

int main()
{

	printf("Poop");
	return 0;
}

