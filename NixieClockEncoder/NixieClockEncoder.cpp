// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>


void digitalWrite(int pin, int value) {
	//dummy function doesn't do anything because this isn't an adrunio
	
	printf("pin: %d state: %d\n", pin, value);

	return;
}


void writeZero(int tubeSelect) {
	switch (tubeSelect) {
	case 0:
		digitalWrite(2, 0);
		digitalWrite(3, 0);
		digitalWrite(4, 0);
		digitalWrite(5, 0);
		break;
	case 1:
		digitalWrite(6, 0);
		digitalWrite(7, 0);
		digitalWrite(8, 0);
		digitalWrite(9, 0);
		break;
	case 2:
		digitalWrite(10, 0);
		digitalWrite(11, 0);
		digitalWrite(12, 0);
		digitalWrite(13, 0);
		break;
	case 3:
		digitalWrite(14, 0);
		digitalWrite(15, 0);
		digitalWrite(16, 0);
		digitalWrite(17, 0);
		break;
	case 4:
		digitalWrite(18, 0);
		digitalWrite(19, 0);
		digitalWrite(20, 0);
		digitalWrite(21, 0);
		break;
	case 5:
		digitalWrite(22, 0);
		digitalWrite(23, 0);
		digitalWrite(24, 0);
		digitalWrite(25, 0);
		break;
	case 6:
		digitalWrite(26, 0);
		digitalWrite(27, 0);
		digitalWrite(28, 0);
		digitalWrite(29, 0);
		break;
	case 7:
		digitalWrite(30, 0);
		digitalWrite(31, 0);
		digitalWrite(32, 0);
		digitalWrite(33, 0);
		break;

	}
}
void writeOne(int tubeSelect) {
	switch (tubeSelect) {
	case 0:
		digitalWrite(0, 0);
		digitalWrite(1, 0);
		digitalWrite(2, 0);
		digitalWrite(3, 1);
		break;
	case 1:
		digitalWrite(4, 0);
		digitalWrite(5, 0);
		digitalWrite(6, 0);
		digitalWrite(7, 1);
		break;
	case 2:
		digitalWrite(8, 0);
		digitalWrite(9, 0);
		digitalWrite(10, 0);
		digitalWrite(11, 1);
		break;
	case 3:
		digitalWrite(12, 0);
		digitalWrite(13, 0);
		digitalWrite(14, 0);
		digitalWrite(15, 1);
		break;
	case 4:
		digitalWrite(16, 0);
		digitalWrite(17, 0);
		digitalWrite(18, 0);
		digitalWrite(19, 1);
		break;
	case 5:
		digitalWrite(20, 0);
		digitalWrite(21, 0);
		digitalWrite(22, 0);
		digitalWrite(23, 1);
		break;
	case 6:
		digitalWrite(24, 0);
		digitalWrite(25, 0);
		digitalWrite(26, 0);
		digitalWrite(27, 1);
		break;
	case 7:
		digitalWrite(28, 0);
		digitalWrite(29, 0);
		digitalWrite(30, 0);
		digitalWrite(31, 1);
		break;
	}
}
void writeTwo(int tubeSelect) {
	switch (tubeSelect) {
	case 0:
		digitalWrite(0, 0);
		digitalWrite(1, 0);
		digitalWrite(2, 1);
		digitalWrite(3, 0);
		break;
	case 1:
		digitalWrite(4, 0);
		digitalWrite(5, 0);
		digitalWrite(6, 1);
		digitalWrite(7, 0);
		break;
	case 2:
		digitalWrite(8, 0);
		digitalWrite(9, 0);
		digitalWrite(10, 1);
		digitalWrite(11, 0);
		break;
	case 3:
		digitalWrite(12, 0);
		digitalWrite(13, 0);
		digitalWrite(14, 1);
		digitalWrite(15, 0);
		break;
	case 4:
		digitalWrite(16, 0);
		digitalWrite(17, 0);
		digitalWrite(18, 1);
		digitalWrite(19, 0);
		break;
	case 5:
		digitalWrite(20, 0);
		digitalWrite(21, 0);
		digitalWrite(22, 1);
		digitalWrite(23, 0);
		break;
	case 6:
		digitalWrite(24, 0);
		digitalWrite(25, 0);
		digitalWrite(26, 1);
		digitalWrite(27, 0);
		break;
	case 7:
		digitalWrite(28, 0);
		digitalWrite(29, 0);
		digitalWrite(30, 1);
		digitalWrite(31, 0);
		break;

	}
}
void writeThree(int tubeSelect) {
	switch (tubeSelect) {
	case 0:
		digitalWrite(0, 0);
		digitalWrite(1, 0);
		digitalWrite(2, 1);
		digitalWrite(3, 1);
		break;
	case 1:
		digitalWrite(4, 0);
		digitalWrite(5, 0);
		digitalWrite(6, 1);
		digitalWrite(7, 1);
		break;
	case 2:
		digitalWrite(8, 0);
		digitalWrite(9, 0);
		digitalWrite(10, 1);
		digitalWrite(11, 1);
		break;
	case 3:
		digitalWrite(12, 0);
		digitalWrite(13, 0);
		digitalWrite(14, 1);
		digitalWrite(15, 1);
		break;
	case 4:
		digitalWrite(16, 0);
		digitalWrite(17, 0);
		digitalWrite(18, 1);
		digitalWrite(19, 1);
		break;
	case 5:
		digitalWrite(20, 0);
		digitalWrite(21, 0);
		digitalWrite(22, 1);
		digitalWrite(23, 1);
		break;
	case 6:
		digitalWrite(24, 0);
		digitalWrite(25, 0);
		digitalWrite(26, 1);
		digitalWrite(27, 1);
		break;
	case 7:
		digitalWrite(28, 0);
		digitalWrite(29, 0);
		digitalWrite(30, 1);
		digitalWrite(31, 1);
		break;

	}
}
void writeFour(int tubeSelect) {
	switch (tubeSelect) {
	case 0:
		digitalWrite(0, 0);
		digitalWrite(1, 1);
		digitalWrite(2, 0);
		digitalWrite(3, 0);
		break;
	case 1:
		digitalWrite(4, 0);
		digitalWrite(5, 1);
		digitalWrite(6, 0);
		digitalWrite(7, 0);
		break;
	case 2:
		digitalWrite(8, 0);
		digitalWrite(9, 1);
		digitalWrite(10, 0);
		digitalWrite(11, 0);
		break;
	case 3:
		digitalWrite(12, 0);
		digitalWrite(13, 1);
		digitalWrite(14, 0);
		digitalWrite(15, 0);
		break;
	case 4:
		digitalWrite(16, 0);
		digitalWrite(17, 1);
		digitalWrite(18, 0);
		digitalWrite(19, 0);
		break;
	case 5:
		digitalWrite(20, 0);
		digitalWrite(21, 1);
		digitalWrite(22, 0);
		digitalWrite(23, 0);
		break;
	case 6:
		digitalWrite(24, 0);
		digitalWrite(25, 1);
		digitalWrite(26, 0);
		digitalWrite(27, 0);
		break;
	case 7:
		digitalWrite(28, 0);
		digitalWrite(29, 1);
		digitalWrite(30, 0);
		digitalWrite(31, 0);
		break;

	}
}
void writeFive(int tubeSelect) {
	switch (tubeSelect) {
	case 0:
		digitalWrite(0, 0);
		digitalWrite(1, 1);
		digitalWrite(2, 0);
		digitalWrite(3, 1);
		break;
	case 1:
		digitalWrite(4, 0);
		digitalWrite(5, 1);
		digitalWrite(6, 0);
		digitalWrite(7, 1);
		break;
	case 2:
		digitalWrite(8, 0);
		digitalWrite(9, 1);
		digitalWrite(10, 0);
		digitalWrite(11, 1);
		break;
	case 3:
		digitalWrite(12, 0);
		digitalWrite(13, 1);
		digitalWrite(14, 0);
		digitalWrite(15, 1);
		break;
	case 4:
		digitalWrite(16, 0);
		digitalWrite(17, 1);
		digitalWrite(18, 0);
		digitalWrite(19, 1);
		break;
	case 5:
		digitalWrite(20, 0);
		digitalWrite(21, 1);
		digitalWrite(22, 0);
		digitalWrite(23, 1);
		break;
	case 6:
		digitalWrite(24, 0);
		digitalWrite(25, 1);
		digitalWrite(26, 0);
		digitalWrite(27, 1);
		break;
	case 7:
		digitalWrite(28, 0);
		digitalWrite(29, 1);
		digitalWrite(30, 0);
		digitalWrite(31, 1);
		break;

	}
}
void writeSix(int tubeSelect) {
	switch (tubeSelect) {
	case 0:
		digitalWrite(0, 0);
		digitalWrite(1, 1);
		digitalWrite(2, 1);
		digitalWrite(3, 0);
		break;
	case 1:
		digitalWrite(4, 0);
		digitalWrite(5, 1);
		digitalWrite(6, 1);
		digitalWrite(7, 0);
		break;
	case 2:
		digitalWrite(8, 0);
		digitalWrite(9, 1);
		digitalWrite(10, 1);
		digitalWrite(11, 0);
		break;
	case 3:
		digitalWrite(12, 0);
		digitalWrite(13, 1);
		digitalWrite(14, 1);
		digitalWrite(15, 0);
		break;
	case 4:
		digitalWrite(16, 0);
		digitalWrite(17, 1);
		digitalWrite(18, 1);
		digitalWrite(19, 0);
		break;
	case 5:
		digitalWrite(20, 0);
		digitalWrite(21, 1);
		digitalWrite(22, 1);
		digitalWrite(23, 0);
		break;
	case 6:
		digitalWrite(24, 0);
		digitalWrite(25, 1);
		digitalWrite(26, 1);
		digitalWrite(27, 0);
		break;
	case 7:
		digitalWrite(28, 0);
		digitalWrite(29, 1);
		digitalWrite(30, 1);
		digitalWrite(31, 0);
		break;

	}
}
void writeSeven(int tubeSelect) {
	switch (tubeSelect) {
	case 0:
		digitalWrite(0, 0);
		digitalWrite(1, 1);
		digitalWrite(2, 1);
		digitalWrite(3, 1);
		break;
	case 1:
		digitalWrite(4, 0);
		digitalWrite(5, 1);
		digitalWrite(6, 1);
		digitalWrite(7, 1);
		break;
	case 2:
		digitalWrite(8, 0);
		digitalWrite(9, 1);
		digitalWrite(10, 1);
		digitalWrite(11, 1);
		break;
	case 3:
		digitalWrite(12, 0);
		digitalWrite(13, 1);
		digitalWrite(14, 1);
		digitalWrite(15, 1);
		break;
	case 4:
		digitalWrite(16, 0);
		digitalWrite(17, 1);
		digitalWrite(18, 1);
		digitalWrite(19, 1);
		break;
	case 5:
		digitalWrite(20, 0);
		digitalWrite(21, 1);
		digitalWrite(22, 1);
		digitalWrite(23, 1);
		break;
	case 6:
		digitalWrite(24, 0);
		digitalWrite(25, 1);
		digitalWrite(26, 1);
		digitalWrite(27, 1);
		break;
	case 7:
		digitalWrite(28, 0);
		digitalWrite(29, 1);
		digitalWrite(30, 1);
		digitalWrite(31, 1);
		break;

	}
}
void writeEight(int tubeSelect) {
	switch (tubeSelect) {
	case 0:
		digitalWrite(0, 1);
		digitalWrite(1, 0);
		digitalWrite(2, 0);
		digitalWrite(3, 0);
		break;
	case 1:
		digitalWrite(4, 1);
		digitalWrite(5, 0);
		digitalWrite(6, 0);
		digitalWrite(7, 0);
		break;
	case 2:
		digitalWrite(8, 1);
		digitalWrite(9, 0);
		digitalWrite(10, 0);
		digitalWrite(11, 0);
		break;
	case 3:
		digitalWrite(12, 1);
		digitalWrite(13, 0);
		digitalWrite(14, 0);
		digitalWrite(15, 0);
		break;
	case 4:
		digitalWrite(16, 1);
		digitalWrite(17, 0);
		digitalWrite(18, 0);
		digitalWrite(19, 0);
		break;
	case 5:
		digitalWrite(20, 1);
		digitalWrite(21, 0);
		digitalWrite(22, 0);
		digitalWrite(23, 0);
		break;
	case 6:
		digitalWrite(24, 1);
		digitalWrite(25, 0);
		digitalWrite(26, 0);
		digitalWrite(27, 0);
		break;
	case 7:
		digitalWrite(28, 1);
		digitalWrite(29, 0);
		digitalWrite(30, 0);
		digitalWrite(31, 0);
		break;

	}
}
void writeNine(int tubeSelect) {
	switch (tubeSelect) {
	case 0:
		digitalWrite(0, 1);
		digitalWrite(1, 0);
		digitalWrite(2, 0);
		digitalWrite(3, 1);
		break;
	case 1:
		digitalWrite(4, 1);
		digitalWrite(5, 0);
		digitalWrite(6, 0);
		digitalWrite(7, 1);
		break;
	case 2:
		digitalWrite(8, 1);
		digitalWrite(9, 0);
		digitalWrite(10, 0);
		digitalWrite(11, 1);
		break;
	case 3:
		digitalWrite(12, 1);
		digitalWrite(13, 0);
		digitalWrite(14, 0);
		digitalWrite(15, 1);
		break;
	case 4:
		digitalWrite(16, 1);
		digitalWrite(17, 0);
		digitalWrite(18, 0);
		digitalWrite(19, 1);
		break;
	case 5:
		digitalWrite(20, 1);
		digitalWrite(21, 0);
		digitalWrite(22, 0);
		digitalWrite(23, 1);
		break;
	case 6:
		digitalWrite(24, 1);
		digitalWrite(25, 0);
		digitalWrite(26, 0);
		digitalWrite(27, 1);
		break;
	case 7:
		digitalWrite(28, 1);
		digitalWrite(29, 0);
		digitalWrite(30, 0);
		digitalWrite(31, 1);
		break;

	}
}

void setPinsWithTime(int *time, int size) {
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


	for (int i = 0; i < size; i++) {
		printf("- Tube %d - \n", i);
		switch (time[i]) {
		case 0:
			writeZero(i);
			break;
		case 1:
			writeOne(i);
			break;
		case 2:
			writeTwo(i);
			break;
		case 3:
			writeThree(i);
			break;
		case 4:
			writeFour(i);
			break;
		case 5:
			writeFive(i);
			break;
		case 6:
			writeSix(i);
			break;
		case 7:
			writeSeven(i);
			break;
		case 8:
			writeEight(i);
			break;
		case 9:
			writeNine(i);
			break;
		}
	}
}









void testNumbers(int testNum) {
	printf("\nTesting all %d's\n", testNum);
	int testBitString[6];

	for (int i = 0; i < 6; i++) {
		testBitString[i] = testNum;
	}
	setPinsWithTime(testBitString, 6);

	return;
}


int main()
{

	for (int i = 0; i < 10; i++) {
		testNumbers(i);
		getchar();
	}

	
	return 0;
}
