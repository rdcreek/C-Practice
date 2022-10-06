#include<stdio.h>


//Function prototypes
int collatzcount(int); 
int collatzsequence(int);



//Main Function
int main(int argc, char* argv[]){
    int n = 0; 
    
    printf("Enter a number: \n");
    scanf("%d", &n); 

    printf("Number of steps: %d\n", collatzcount(n)); 
    collatzsequence(n); 
    printf("\n");
    return 0; 
}



//Functions
int collatzcount(int num){
    int count = 1; 
    while (num >= 1){
        if (num == 1){
            return count; 
    }
        else if(num % 2 == 0){
            num /= 2; 
            count++;
    }
        else{
            num = num * 3 + 1; 
            count++; 
    }
    }
    return count;
}

int collatzsequence(int num){
    int count = collatzcount(num);
    int sequence[count]; 


    for(int i = 0; i < count; i++){
        sequence[i] = num; 
        if(num == 1){
            break; 
        }
        else if(num % 2 == 0){
            num /=2; 

        }    
        else{
            num = num * 3 + 1; 
        }
    }

    printf("The sequence: "); 
    for (int j = 0; j < count; j++){
        printf("%d, ", sequence[j]); 
    }


    //return sequence; 
}