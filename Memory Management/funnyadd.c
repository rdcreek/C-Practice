/*This was a really annoying, but insightful exercise about variable scope in functions.  
The funnyadd function returns 17, but it looks like it should return 19.  After all, 2*7+5 should be 19. 
I spent an embarrassing amount of time wondering what was going on. I even wrote the program in Python and it returned 19.  
But I missed something...

The issue is that I was assuming that i and j held the same values inside the funnyadd function that they did outside of it.  
But since the two parameters are also listed as j and i, it was easy to miss the fact that i and j are flipped.  
It is not 2*7+5, but rather 2*5+7.  I noticed it in the Python version of the program because of syntax highlighting.  

Lesson learned:  Pay much closer attention to parameters and arguments.  
If possible, avoid letting parameters in the function prototype be the exact same letters are variables already initialized. 
*/

#include <stdio.h>
int funnyadd(int j, int i);

int main(void)
{
        int i = 5;
        int j = 7;
        i = funnyadd(i,j);
        printf("%d", i);
        return 0;
}


int funnyadd(int j, int i)
{
int a = 2;
return (a*j+i);
}
