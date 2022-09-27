#include <stdio.h>

/* A fun program for an online C course. 

Program counts the memory size of various data types and adds them up. 
Input the number of items to be counted.
Then input the number of values of each data type, followed by the data type.  Use 'i', 'c', 'd' for int, char, and double.



The program should print out the space required in bytes.  If you input something incorrectly, such as using the wrong letter,
it will print "Invalid tracking code type".  

For instance:

3
10 i
7 c
12 d

Output: 143 bytes
*/



int main(void){
    int i = 0;
    int count = 0;
    int total = 0;
    int num = 0;
    char type = ' ';
    
    
    scanf("%d", &count);
    for(i = 0; i < count; i++){
       scanf("%d %c", &num, &type);
       if(type == 'i'){
          total += num * sizeof(int);
       }
       else if(type == 'c'){
          total += num * sizeof(char);
       }
       else if(type == 'd'){
          total += num * sizeof(double);
       }
       else{
          
           break;
       }
       
    }
    
    
    if(type == 'c' || type == 'i' || type == 'd'){
    printf("%d bytes", total); 
    }
    else{
    printf("Invalid tracking code type"); 
    }
    
    
    
    return 0;
}
