/* This program reverses a six digit integer array by using a function that swaps individual values with pointers. */


#include <stdio.h>

//Function Prototype
void reverseArray(int*);

//Main Function
int main(void)
{
int array[6];     
    
scanf("%d %d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4], &array[5]);

reverseArray(array);

for(int i = 0; i <6; i++){
    printf("%d ", array[i]);
}    
    
    
    
    
    return 0; 
}



//Function
void reverseArray(int* ptr)
{
    int swap = 0;
    //swap first and last digits. 
    swap = *(ptr + 0);
    *(ptr) = *(ptr + 5);
    *(ptr +5) = swap;
    //swap second and second to last digits. 
    swap = *(ptr + 1);
    *(ptr + 1) = *(ptr + 4);
    *(ptr +4) = swap;
    //swap third and fourth digits. 
     swap = *(ptr + 2);
    *(ptr + 2) = *(ptr + 3);
    *(ptr +3) = swap;
    
}
