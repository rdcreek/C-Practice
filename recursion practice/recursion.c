#include <stdio.h>


//Function prototypes
int factorial(int);
int fibonacci(int);


//Main Function
int main(void){


return 0;
}






//Function Definitions
int factorial(int n){
    int result;
    if(n==0){
        result=1;
    }
    result = n * factorial(n-1);
    return result;
}

int fibonacci(int n) {
    if (n==1) {
        return 0;
    } else if (n==2) {
        return 1;
    } else {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}
