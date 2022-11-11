/* Simple program to mess around with customized structs and the dot notation for them. */

#include <stdio.h>

struct student{
    char firstName[30];
    char lastName[30];
    int birthYear;
    double aveGrade;
};

int main(void) {
	
    struct student me = {"Chuck", "Norris", 1965, 3.5};
    struct student you = {"Sean", "Connery", 1947, 3.5};
    printf("Names: %s %s, %s %s\n", me.firstName, me.lastName, you.firstName, you.lastName);
    printf("Year of birth: %d\n", me.birthYear);
    printf("Average grade: %.2lf\n", me.aveGrade);
	return 0;
}
