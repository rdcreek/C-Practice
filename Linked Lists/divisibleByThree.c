/*This program takes user input for a number, stores it in a linked list, and then determines
if the number is divisble by three.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct digit {
    int num;
    struct digit *next;
};

// Write your prototypes here
struct digit * createDigit(int dig);
struct digit * append(struct digit * end, struct digit * newDigitptr);
void printNumber(struct digit *start);
void freeNumber(struct digit *start); 
struct digit * readNumber();    
int divisibleByThree(struct digit * start); 

//Main Function 
int main(void) {
    struct digit *start;
    start = readNumber();
    printf("The number ");
    printNumber(start);
    if (divisibleByThree(start)) 
        printf("is divisible by 3.\n");
    else
        printf("is not divisible by 3.\n");
    freeNumber(start);
    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit *readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}

// Write your divisibleByThree() function here
int divisibleByThree(struct digit * start){
    struct digit * ptr = start;
    int sumOfDigits = 0; 
    while (ptr!=NULL) {
        sumOfDigits += ptr->num; 
        ptr = ptr->next;
}
    return (sumOfDigits % 3) == 0; 
    }
    
