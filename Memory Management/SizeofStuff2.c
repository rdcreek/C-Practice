#include <stdio.h>

/*
Program calculates the memory size of a number of variables of a certain type 
(using 'i', 's', 'c', and 'd' for int, short, char, and double).  Input the appropriate letter and the number of variables.
The output will be the memory size in MB, KB, and bytes.  

For example:
input: d 654250 
output: "5 MB and 234 KB and 0 B"
*/


int main(void)
{
    char datatype = ' ';
    int mem = 0, bytes = 0;
    
    scanf("%c %d", &datatype, &mem);
    
    if(datatype == 'i'){
        bytes = mem * sizeof(int);
    }
    if(datatype == 's'){
        bytes = mem * sizeof(short);
    }
    if(datatype == 'c'){
        bytes = mem * sizeof(char);
    }
    if(datatype == 'd'){
        bytes = mem * sizeof(double);
    }
    
    
    if (bytes < 1000){
        printf("%d B\n", bytes);
    }
    if (bytes > 1000 && bytes < 1000000){
    printf("%d KB and %d B\n", bytes / 1000, bytes % 1000);
    }
    if (bytes >= 1000000){
        printf("%d MB and %d KB and %d B\n", bytes / 1000000, (bytes % 1000000) / 1000, (bytes % 1000000) % 1000);
    }
    
    
    
    
    
    
    
    return 0; 
}
