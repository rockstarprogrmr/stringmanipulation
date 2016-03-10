#include "stdio.h"
#include "stdint.h"
#include "StringManipulation.h"

int main() {
	unsigned char simpleText[] = "Hello";
	unsigned long numChar = 0;

	numChar = countChar(simpleText);
	printf("Number of character = %d", numChar);

	return 0;
}