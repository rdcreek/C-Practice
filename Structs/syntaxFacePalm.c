#include <stdio.h>



struct point{
    double x;
    double y;
};


int main(void) {
   
    struct point pentagon[5]; 
    
     pentagon[4].y = 4.1;  

    //pentagon[4]->y = 4.1;  

    //pentagon.y[4] = 4.1;

    //pentagon->y[4] = 4.1;

   (pentagon+4)->y = 4.1;

    //(pentagon+4).y = 4.1;

    //(pentagon+4)[y] = 4.1;  
    
    //readPoint(&z);
    //printPoint(z);
	return 0;
}
