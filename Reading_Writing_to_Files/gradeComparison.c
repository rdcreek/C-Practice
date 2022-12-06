#include <stdio.h>

int main(void) {
	
	FILE *iFile;
	double myclass, Avg;
	int num;
	int isHighest;
	
	iFile = fopen("gradeComparison.txt", "r");
	fscanf(iFile, "%lf", &myclass);
	
	num = 1;
	isHighest = 1;
	while (fscanf(iFile, "%lf", &Avg) != EOF) {
		ctr++;
		if (Avg > myclass) {
			isHighest = 0;
			printf("No %d\n", num);
			break;
		}
	}
	
	fclose(iFile);
	
	if (isHighest) {
		printf("Yes\n");
	}
	
	return 0;
