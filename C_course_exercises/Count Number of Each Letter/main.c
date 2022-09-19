
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

 /*
  * Junior Codebreaker Programming Assignment
  */
int main(int argc, char** argv)
{
	// IMPORTANT: Only add code in the section
	// indicated below. The code I've provided
	// makes your solution work with the 
	// automated grader on Coursera
	char input[MAX_LENGTH];
	fgets(input, MAX_LENGTH, stdin);
	while (input[0] != 'q')
	{
		// Add your code between this comment
		// and the comment below. You can of
		// course add more space between the
		// comments as needed
		char letters[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

		int count[26] = { 0 };
		int length = strlen(input) - 1;

		for (int i = 0; i < 26; i++) {
			for (int j = 0; j < length; j++) {
				if (toupper(input[j]) == letters[i]) {
					count[i] += 1; 
				}



		}
			
			if (count[i] != 0) {
				printf("%c%d ", letters[i], count[i]);
				
			}
			
		}

		
		printf("\n");



		// Don't add or modify any code below
		// this comment
		fgets(input, MAX_LENGTH, stdin);
	}

	return 0;
}
