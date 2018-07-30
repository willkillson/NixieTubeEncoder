// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void digitalWrite(int pin, bool value) {
	//dummy function doesn't do anything because this isn't an adrunio
	printf("Writing pin %d ", &pin);
	return;
}


char* encodeTimeToBinary(int time) {
	//takes in HH or MM or SS and returns char* 8 bits in binary
	char* binaryTime=NULL;

	return binaryTime;
}

void setPinsWithEncodedTime(int *time, int size) {
	/*Tube Pin mappings
		    D   C    B   A
	Tube1	2   3    4   5	s
	Tube2	6   7    8   9  s
	Tube3	10	11	12	13	m
	Tube4	14	15	16	17	m
	Tube5	18	19	20	21	h
	Tube6	22	23	24	25	h

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


	//first 2 tubes
	//switch()

}

void writeZero(int tubeSelect) {
	switch (tubeSelect) {
	case 0:
		digitalWrite(2, false);
		digitalWrite(3, false);
		digitalWrite(4, false);
		digitalWrite(5, false);
		break;
	case 1:
		digitalWrite(6, false);
		digitalWrite(7, false);
		digitalWrite(8, false);
		digitalWrite(9, false);
		break;
	case 2:
		digitalWrite(10, false);
		digitalWrite(11, false);
		digitalWrite(12, false);
		digitalWrite(13, false);
		break;
	case 3:
		digitalWrite(14, false);
		digitalWrite(15, false);
		digitalWrite(16, false);
		digitalWrite(17, false);
		break;
	case 4:
		digitalWrite(18, false);
		digitalWrite(19, false);
		digitalWrite(20, false);
		digitalWrite(21, false);
		break;
	case 5:
		digitalWrite(22, false);
		digitalWrite(23, false);
		digitalWrite(24, false);
		digitalWrite(25, false);
		break;
	case 6:
		digitalWrite(26, false);
		digitalWrite(27, false);
		digitalWrite(28, false);
		digitalWrite(29, false);
		break;
	case 7:
		digitalWrite(30, false);
		digitalWrite(31, false);
		digitalWrite(32, false);
		digitalWrite(33, false);
		break;

	}
}
void writeOne(int tubeSelect) {
	switch (tubeSelect) {
	case 0:
		digitalWrite(0, false);
		digitalWrite(1, false);
		digitalWrite(2, false);
		digitalWrite(3, true);
		break;
	case 1:
		digitalWrite(4, false);
		digitalWrite(5, false);
		digitalWrite(6, false);
		digitalWrite(7, true);
		break;
	case 2:
		digitalWrite(8, false);
		digitalWrite(9, false);
		digitalWrite(10, false);
		digitalWrite(11, true);
		break;
	case 3:
		digitalWrite(12, false);
		digitalWrite(13, false);
		digitalWrite(14, false);
		digitalWrite(15, true);
		break;
	case 4:
		digitalWrite(16, false);
		digitalWrite(17, false);
		digitalWrite(18, false);
		digitalWrite(19, true);
		break;
	case 5:
		digitalWrite(20, false);
		digitalWrite(21, false);
		digitalWrite(22, false);
		digitalWrite(23, true);
		break;
	case 6:
		digitalWrite(24, false);
		digitalWrite(25, false);
		digitalWrite(26, false);
		digitalWrite(27, true);
		break;
	case 7:
		digitalWrite(28, false);
		digitalWrite(29, false);
		digitalWrite(30, false);
		digitalWrite(31, true);
		break;
	}
}
void writeTwo(int tubeSelect) {
	switch (tubeSelect) {
	case 0:
		digitalWrite(0, false);
		digitalWrite(1, false);
		digitalWrite(2, true);
		digitalWrite(3, false);
		break;
	case 1:
		digitalWrite(4, false);
		digitalWrite(5, false);
		digitalWrite(6, true);
		digitalWrite(7, false);
		break;
	case 2:
		digitalWrite(8, false);
		digitalWrite(9, false);
		digitalWrite(10, true);
		digitalWrite(11, false);
		break;
	case 3:
		digitalWrite(12, false);
		digitalWrite(13, false);
		digitalWrite(14, true);
		digitalWrite(15, false);
		break;
	case 4:
		digitalWrite(16, false);
		digitalWrite(17, false);
		digitalWrite(18, true);
		digitalWrite(19, false);
		break;
	case 5:
		digitalWrite(20, false);
		digitalWrite(21, false);
		digitalWrite(22, true);
		digitalWrite(23, false);
		break;
	case 6:
		digitalWrite(24, false);
		digitalWrite(25, false);
		digitalWrite(26, true);
		digitalWrite(27, false);
		break;
	case 7:
		digitalWrite(28, false);
		digitalWrite(29, false);
		digitalWrite(30, true);
		digitalWrite(31, false);
		break;

	}
}
void writeThree(int tubeSelect) {
	switch (tubeSelect) {
	case 0:
		digitalWrite(0, false);
		digitalWrite(1, false);
		digitalWrite(2, true);
		digitalWrite(3, true);
		break;
	case 1:
		digitalWrite(4, false);
		digitalWrite(5, false);
		digitalWrite(6, true);
		digitalWrite(7, true);
		break;
	case 2:
		digitalWrite(8, false);
		digitalWrite(9, false);
		digitalWrite(10, true);
		digitalWrite(11, true);
		break;
	case 3:
		digitalWrite(12, false);
		digitalWrite(13, false);
		digitalWrite(14, true);
		digitalWrite(15, true);
		break;
	case 4:
		digitalWrite(16, false);
		digitalWrite(17, false);
		digitalWrite(18, true);
		digitalWrite(19, true);
		break;
	case 5:
		digitalWrite(20, false);
		digitalWrite(21, false);
		digitalWrite(22, true);
		digitalWrite(23, true);
		break;
	case 6:
		digitalWrite(24, false);
		digitalWrite(25, false);
		digitalWrite(26, true);
		digitalWrite(27, true);
		break;
	case 7:
		digitalWrite(28, false);
		digitalWrite(29, false);
		digitalWrite(30, true);
		digitalWrite(31, true);
		break;

	}
}
void writeFour(int tubeSelect) {
	switch (tubeSelect) {
	case 0:
		digitalWrite(0, false);
		digitalWrite(1, true);
		digitalWrite(2, false);
		digitalWrite(3, false);
		break;
	case 1:
		digitalWrite(4, false);
		digitalWrite(5, true);
		digitalWrite(6, false);
		digitalWrite(7, false);
		break;
	case 2:
		digitalWrite(8, false);
		digitalWrite(9, true);
		digitalWrite(10, false);
		digitalWrite(11, false);
		break;
	case 3:
		digitalWrite(12, false);
		digitalWrite(13, true);
		digitalWrite(14, false);
		digitalWrite(15, false);
		break;
	case 4:
		digitalWrite(16, false);
		digitalWrite(17, true);
		digitalWrite(18, false);
		digitalWrite(19, false);
		break;
	case 5:
		digitalWrite(20, false);
		digitalWrite(21, true);
		digitalWrite(22, false);
		digitalWrite(23, false);
		break;
	case 6:
		digitalWrite(24, false);
		digitalWrite(25, true);
		digitalWrite(26, false);
		digitalWrite(27, false);
		break;
	case 7:
		digitalWrite(28, false);
		digitalWrite(29, true);
		digitalWrite(30, false);
		digitalWrite(31, false);
		break;

	}
}
void writeFive(int tubeSelect){
	switch (tubeSelect) {
	case 0:
		digitalWrite(0, false);
		digitalWrite(1, true);
		digitalWrite(2, false);
		digitalWrite(3, true);
		break;
	case 1:
		digitalWrite(4, false);
		digitalWrite(5, true);
		digitalWrite(6, false);
		digitalWrite(7, true);
		break;
	case 2:
		digitalWrite(8, false);
		digitalWrite(9, true);
		digitalWrite(10, false);
		digitalWrite(11, true);
		break;
	case 3:
		digitalWrite(12, false);
		digitalWrite(13, true);
		digitalWrite(14, false);
		digitalWrite(15, true);
		break;
	case 4:
		digitalWrite(16, false);
		digitalWrite(17, true);
		digitalWrite(18, false);
		digitalWrite(19, true);
		break;
	case 5:
		digitalWrite(20, false);
		digitalWrite(21, true);
		digitalWrite(22, false);
		digitalWrite(23, true);
		break;
	case 6:
		digitalWrite(24, false);
		digitalWrite(25, true);
		digitalWrite(26, false);
		digitalWrite(27, true);
		break;
	case 7:
		digitalWrite(28, false);
		digitalWrite(29, true);
		digitalWrite(30, false);
		digitalWrite(31, true);
		break;

	}
}
void writeSix(int tubeSelect) {
	switch (tubeSelect) {
	case 0:
		digitalWrite(0, false);
		digitalWrite(1, true);
		digitalWrite(2, true);
		digitalWrite(3, false);
		break;
	case 1:
		digitalWrite(4, false);
		digitalWrite(5, true);
		digitalWrite(6, true);
		digitalWrite(7, false);
		break;
	case 2:
		digitalWrite(8, false);
		digitalWrite(9, true);
		digitalWrite(10, true);
		digitalWrite(11, false);
		break;
	case 3:
		digitalWrite(12, false);
		digitalWrite(13, true);
		digitalWrite(14, true);
		digitalWrite(15, false);
		break;
	case 4:
		digitalWrite(16, false);
		digitalWrite(17, true);
		digitalWrite(18, true);
		digitalWrite(19, false);
		break;
	case 5:
		digitalWrite(20, false);
		digitalWrite(21, true);
		digitalWrite(22, true);
		digitalWrite(23, false);
		break;
	case 6:
		digitalWrite(24, false);
		digitalWrite(25, true);
		digitalWrite(26, true);
		digitalWrite(27, false);
		break;
	case 7:
		digitalWrite(28, false);
		digitalWrite(29, true);
		digitalWrite(30, true);
		digitalWrite(31, false);
		break;

	}
}
void writeSeven(int tubeSelect) {
	switch (tubeSelect) {
	case 0:
		digitalWrite(0, false);
		digitalWrite(1, true);
		digitalWrite(2, true);
		digitalWrite(3, true);
		break;
	case 1:
		digitalWrite(4, false);
		digitalWrite(5, true);
		digitalWrite(6, true);
		digitalWrite(7, true);
		break;
	case 2:
		digitalWrite(8, false);
		digitalWrite(9, true);
		digitalWrite(10, true);
		digitalWrite(11, true);
		break;
	case 3:
		digitalWrite(12, false);
		digitalWrite(13, true);
		digitalWrite(14, true);
		digitalWrite(15, true);
		break;
	case 4:
		digitalWrite(16, false);
		digitalWrite(17, true);
		digitalWrite(18, true);
		digitalWrite(19, true);
		break;
	case 5:
		digitalWrite(20, false);
		digitalWrite(21, true);
		digitalWrite(22, true);
		digitalWrite(23, true);
		break;
	case 6:
		digitalWrite(24, false);
		digitalWrite(25, true);
		digitalWrite(26, true);
		digitalWrite(27, true);
		break;
	case 7:
		digitalWrite(28, false);
		digitalWrite(29, true);
		digitalWrite(30, true);
		digitalWrite(31, true);
		break;

	}
}
void writeEight(int tubeSelect) {
	switch (tubeSelect) {
	case 0:
		digitalWrite(0, true);
		digitalWrite(1, false);
		digitalWrite(2, false);
		digitalWrite(3, false);
		break;
	case 1:
		digitalWrite(4, true);
		digitalWrite(5, false);
		digitalWrite(6, false);
		digitalWrite(7, false);
		break;
	case 2:
		digitalWrite(8, true);
		digitalWrite(9, false);
		digitalWrite(10, false);
		digitalWrite(11, false);
		break;
	case 3:
		digitalWrite(12, true);
		digitalWrite(13, false);
		digitalWrite(14, false);
		digitalWrite(15, false);
		break;
	case 4:
		digitalWrite(16, true);
		digitalWrite(17, false);
		digitalWrite(18, false);
		digitalWrite(19, false);
		break;
	case 5:
		digitalWrite(20, true);
		digitalWrite(21, false);
		digitalWrite(22, false);
		digitalWrite(23, false);
		break;
	case 6:
		digitalWrite(24, true);
		digitalWrite(25, false);
		digitalWrite(26, false);
		digitalWrite(27, false);
		break;
	case 7:
		digitalWrite(28, true);
		digitalWrite(29, false);
		digitalWrite(30, false);
		digitalWrite(31, false);
		break;

	}
}
void writeNine(int tubeSelect) {
	switch (tubeSelect) {
	case 0:
		digitalWrite(0, true);
		digitalWrite(1, false);
		digitalWrite(2, false);
		digitalWrite(3, true);
		break;
	case 1:
		digitalWrite(4, true);
		digitalWrite(5, false);
		digitalWrite(6, false);
		digitalWrite(7, true);
		break;
	case 2:
		digitalWrite(8, true);
		digitalWrite(9, false);
		digitalWrite(10, false);
		digitalWrite(11, true);
		break;
	case 3:
		digitalWrite(12, true);
		digitalWrite(13, false);
		digitalWrite(14, false);
		digitalWrite(15, true);
		break;
	case 4:
		digitalWrite(16, true);
		digitalWrite(17, false);
		digitalWrite(18, false);
		digitalWrite(19, true);
		break;
	case 5:
		digitalWrite(20, true);
		digitalWrite(21, false);
		digitalWrite(22, false);
		digitalWrite(23, true);
		break;
	case 6:
		digitalWrite(24, true);
		digitalWrite(25, false);
		digitalWrite(26, false);
		digitalWrite(27, true);
		break;
	case 7:
		digitalWrite(28, true);
		digitalWrite(29, false);
		digitalWrite(30, false);
		digitalWrite(31, true);
		break;

	}
}

int main()
{
	int testBitString[6] = { 1,0,3,0,0,0};

	setPinsWithEncodedTime(testBitString, 6);
	return 0;
}

