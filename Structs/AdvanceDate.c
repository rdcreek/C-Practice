/*This one was pretty ugly, but it was useful. The point of the exercise was to write a function that advanced the date
(stored as a struct) by one day.  This required figuring out the number of days in every month and incrementing date.day,
date.month, and date.year when appropriate. */

#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

/* add your function definitions here */


void readDate(struct date *dateptr){
    scanf("%d %d %d", &(*dateptr).year, &(*dateptr).month, &(*dateptr).day);
}

void printDate(struct date today){
    printf("%02d/%02d/%d \n", today.month, today.day, today.year ); 
}

struct date advanceDay(struct date date){
    
    //Count Number of Days in Each Month
    int numDays;
    
    if(date.month == 1 || date.month == 3 || date.month == 5 || date.month == 7 || date.month == 8 || date.month == 10 || date.month == 12){
        numDays = 31;
    }
    else if(date.month == 4 || date.month == 6 || date.month == 9 || date.month == 11){
        numDays = 30;
    }
    else{
        numDays = 28; 
    }
    //Increment Date Based on Month
    //Is it the last day of the month? If so... 
    if(date.day == numDays){
        date.day = 1;
        if (date.month == 12){
            date.month = 1;
            date.year++; 
        }
        else {
            date.month++; 
        }
    }
    
    else {
        date.day++;
    }
    
    return date; 
}
