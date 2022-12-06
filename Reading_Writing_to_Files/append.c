#include <stdio.h>

int main(void) {
	
	FILE *gFile;
	int inputGrade, lastGrade;

	
	scanf("%d", &inputGrade);
	
	gFile = fopen("myGrades.txt", "r");
	
	while (fscanf(gFile, "%d", &lastGrade) != EOF) {
		printf("%d ", lastGrade);
	}
	
	if (lastGrade != inputGrade)	{
	    
		fclose(gFile);
		gFile = fopen("myGrades.txt", "a");
		fprintf(gFile, "%d", inputGrade);
		fclose(gFile);
		
		printf("%d", inputGrade);
	}
	
	printf("\n");
	
	return 0;
}
