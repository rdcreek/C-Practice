/* Program scans in a number of players and then stores a score for each player into an array.  
The exercise required me to write a function that took an array of integers and found the difference
between each item and the highest score.  I was required to use pointer arithmetic for the function. */


#include <stdio.h>

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;
    
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

/* Write your function behind() here: */
void behind(int* scores, int num){
    int max = 0; 
    for(int i = 0; i < num; i++){
        if (*(scores + i ) > max){
            max = *(scores + i);
        }
    }
    for(int j = 0; j < num; j++){
        *(scores + j) = max - *(scores + j); 
    }
}
