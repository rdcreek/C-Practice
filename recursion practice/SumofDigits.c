/*For this exercise, I wrote a recursive function to calculate the sum of the digits of an integer. */


#include <stdio.h>

int sumOfDigits(int);

int n = 0;



int main(void){
    
  scanf("%d", &n); 
  printf("%d", sumOfDigits(n));   
    
    return 0;
}

int sumOfDigits(int n){
    
if (n == 0) {
        return 0;
    }
 
    return (n % 10) + sumOfDigits(n / 10);  
        
    
    
}
