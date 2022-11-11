#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}

void readDate(struct date *dateptr){
    scanf("%d %d %d", &(*dateptr).year, &(*dateptr).month, &(*dateptr).day);
}

void printDate(struct date today){
    printf("%d/%02d/%d", today.month, today.day, today.year ); 
}
