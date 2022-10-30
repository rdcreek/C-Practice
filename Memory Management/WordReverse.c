/*Simple program that takes a long string of words and prints out the words in reverse.*/

#include<stdio.h>

int main(void){

char text[68][40];
int i = 0;     


for(i = 0; i < 68; i++){
    scanf("%s", text[i]);
}


for(i=68; i > 0; i--){
    printf("%s ", text[i-1]);
}
 return 0; 
}
