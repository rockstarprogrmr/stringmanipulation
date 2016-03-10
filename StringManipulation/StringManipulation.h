unsigned long countChar(unsigned char *);


//This function will count the number of characters for a given char input
unsigned long countChar(unsigned char *charTextPointer) {
	unsigned long charCount = 0;

	//Fill counter while nth address of character input != NULL or \0
	while (*charTextPointer != '\0'){
		charTextPointer++;
		charCount++;
	}

	return charCount;
}