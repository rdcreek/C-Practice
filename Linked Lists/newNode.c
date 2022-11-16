#include <stdio.h>
#include <stdlib.h>


\\Structs
struct digit 
{
    int num;
    struct digit * next;
};


\\Function prototype
struct digit * createDigit(int dig);


\\Main Function
int main(void) {
    struct digit * numberptr;
    int digitToStore = 55;
    numberptr = createDigit(digitToStore);
    printf("We are storing the digit %d and the pointer %p at memory location %p.\n", numberptr->num, numberptr->next, numberptr);
    free(numberptr);
    return 0;
}
\\Creates a node in a linked list. Function returns digit pointer to a location with the int stored along with the address to the next node.   
struct digit * createDigit(int dig) {

    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}
