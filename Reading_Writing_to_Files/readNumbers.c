#include <stdio.h>

int main(void){
	
	FILE *iFile;
	
	
	double sum = 0; 
	int num, grade;

	
	iFile = fopen("studentGrades.txt", "r");

	
	fscanf(iFile, "%d", &num);
	
	for (int i=0; i<num; i++) {
		fscanf(iFile, "%d", &grade);
		sum += grade;
	}
	
	
	

	printf("%.2lf\n", sum/num);
	fclose(iFile);
	return 0;
}
