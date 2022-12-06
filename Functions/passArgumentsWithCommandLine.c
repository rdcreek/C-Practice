#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int num = 0; 
    double price = 0, total = 0; 
    
    
    
    if(argc != 3){
        printf("Invalid input.\n");
        
    }
    else{
        num = atoi(argv[1]); 
        price = atof(argv[2]);
        total = price * num; 
        
        
        printf("%d plants for %.2lf dollars each cost %.2lf dollars.\n", num, price, total);
    }
    
    
    
    
    return 0; 
}
