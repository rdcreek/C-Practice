/*
 * File:   main.c
 * Author: <Richard Creek>
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

 /*
  * Walking the Walk Programming Assignment
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
		int n = atoi(input);

		// Add your code between this comment
		// and the comment below. You can of
		// course add more space between the
		// comments as needed
		int sum = 0; 

		int* walk = malloc(n * sizeof(walk[0])); 

		for (int i = 0; i < n; i++) {
			walk[i] = i; 
			sum += i; 
			printf("%d ", walk[i]);
		}
		printf("%d\n", sum); 


		free(walk);
		walk = NULL; 



		// Don't add or modify any code below
		// this comment
		fgets(input, MAX_LENGTH, stdin);
	}

	return 0;
}
