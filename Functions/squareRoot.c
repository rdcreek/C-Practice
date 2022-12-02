#include<stdio.h>
#include<math.h>

int main(void){

int num;
double root, euler;
scanf("%d", &num);

root = sqrt(num);
printf("%.8lf\n", root);

euler = exp(1);
printf("%.10lf\n", euler);

printf("gcc program.c -o program -std=c11 -Wall -fmax-errors=10 -Wextra -lm\n");

    
    
    
    return 0; 
}
