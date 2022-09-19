/*
 * File:   main.c
 * Author: <Richard Creek>
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_LENGTH 100

typedef struct Vector Vector;
struct Vector
{
	float x;
	float y;
	float z;
};

typedef struct MoveInfo MoveInfo;
struct MoveInfo
{
	Vector velocity;
	float duration;
};

// prototypes for suggested student-implemented functions
// uncomment the prototypes for the functions you implement
int countInputFileLines(char inputFileName[]);
void getPointFromString(char string[], Vector* point);
void getMoveInfoBetweenPoints(MoveInfo* moveInfo, Vector firstPoint, Vector secondPoint);

/*
 * I, Robot Programming Assignment
 */
int main(int argc, char** argv)
{
	// IMPORTANT: Only add code in the section
	// indicated below. The code I've provided
	// makes your solution work with the 
	// automated grader on Coursera
	char rawFileName[MAX_LENGTH];
	fgets(rawFileName, MAX_LENGTH, stdin);
	while (rawFileName[0] != 'q')
	{
		int stringEndIndex = -1;
		char* result = NULL;
		char* stringStart = &rawFileName[0];

		// handle Windows, MacOS, and Linux
		// check for carriage return
		result = strchr(rawFileName, '\r');
		if (result == NULL)
		{
			// no carriage return found, so find new line
			result = strchr(rawFileName, '\n');
		}

		stringEndIndex = result - stringStart;
		char* inputFileName = malloc((stringEndIndex + 1) * sizeof(char));
		strncpy(inputFileName, rawFileName, stringEndIndex);
		inputFileName[stringEndIndex] = '\0';

		// Add your code between this comment
		// and the comment below. You can of
		// course add more space between the
		// comments as needed

		int numLines = 0;        
		char currentLine[MAX_LENGTH];
		FILE* fptr = fopen(inputFileName, "r");
		numLines = countInputFileLines(inputFileName);
		rewind(fptr);
		//printf("%d",numLines);
		Vector* Vector = malloc(numLines * sizeof(Vector[0]));
		for (int i = 0; i < numLines; i++) {
			fgets(currentLine, MAX_LENGTH, fptr);
			getPointFromString(currentLine, &Vector[i]);
		}
		float totalduration = 0;
		MoveInfo* MoveInfo = malloc(numLines * sizeof(MoveInfo[0]));
		
		for (int i = 0; i < numLines - 1; i++) {
			getMoveInfoBetweenPoints(&MoveInfo[i], Vector[i], Vector[i + 1]);
			printf("%.2f,%.2f,%.2f,%.2f ", MoveInfo[i].velocity.x, MoveInfo[i].velocity.y, MoveInfo[i].velocity.z, MoveInfo[i].duration);
			totalduration += MoveInfo[i].duration;

		}
		printf("%.2f\n", totalduration);

		fclose(fptr);


		// Don't add or modify any code below
		// this comment except as indicated below
		free(inputFileName);
		inputFileName = NULL;
		fgets(rawFileName, MAX_LENGTH, stdin);
	}

	return 0;
}

// Add your function implementations between this 
// comment and the comment below. You can of course 
// add more space between the comments as needed

int countInputFileLines(char inputFileName[])
{
	char currentLine[MAX_LENGTH];
	int numLines = 0; 

	FILE* fptr = fopen(inputFileName, "r");
	if (fptr == NULL) {
		fprintf(stderr, "Error Opening file\n");
		exit(EXIT_FAILURE);
	}
	
	
	while (!feof(fptr))
	{
		fgets(currentLine, MAX_LENGTH, fptr);
		numLines++;
	}
	fclose(fptr);
	fptr = NULL;
	return numLines;

}

void getPointFromString(char string[], Vector* point) {
	// find first comma index
	int commaIndex = -1;
	char* result = NULL;
	result = strchr(string, ',');
	char* stringStart = &string[0];
	commaIndex = result - stringStart;

	char* xString = malloc((commaIndex + 1) * sizeof(char));
	strncpy(xString, string, commaIndex);
	xString[commaIndex] = '\0';
	point->x = atof(xString);

	// find second comma index
	string = &string[0] + commaIndex + 1;
	result = strchr(string, ',');
	stringStart = &string[0];
	commaIndex = result - stringStart;
	char* yString = malloc((commaIndex + 1) * sizeof(char));
	strncpy(yString, string, commaIndex);
	yString[commaIndex] = '\0';
	point->y = atof(yString);

	string = &string[0] + commaIndex + 1;
	result = strchr(string, ',');
	stringStart = &string[0];

	char* zString = malloc((commaIndex + 1) * sizeof(char));
	strncpy(zString, string, commaIndex);
	zString[commaIndex] = '\0';
	point->z = atof(zString);

	free(yString);
	yString = NULL;
	free(xString);
	xString = NULL;
	free(zString);
	zString = NULL;
}

void getMoveInfoBetweenPoints(MoveInfo* moveInfo, Vector firstPoint, Vector secondPoint)
{
	Vector delta;
	delta.x = secondPoint.x - firstPoint.x;
	delta.y = secondPoint.y - firstPoint.y;
	delta.z = secondPoint.z - firstPoint.z;

	moveInfo->duration = sqrt(pow(delta.x, 2.00) + pow(delta.y, 2.00) + pow(delta.z, 2.00));

	moveInfo->velocity.x = delta.x / moveInfo->duration;
	moveInfo->velocity.y = delta.y / moveInfo->duration;
	moveInfo->velocity.z = delta.z / moveInfo->duration;

}
// Don't add or modify any code below this comment
