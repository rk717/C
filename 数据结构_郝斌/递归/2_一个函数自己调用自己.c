#include <stdio.h>
#include <stdlib.h>

void f(int n)
{
    if(n == 1)
    {
        printf("Haha");
    }
    else
    {
        f(n-1); //自己调用自己直到 n==1 
    }
    
}

int main(void)
{
    int num = 5;

    f(num); 

    return 0; 
}