#include <stdio.h>

//间接调用自己距离

/*
int f(int n)
{
    n += 2; 
    return n;
}

int main(void)
{
    int val; 

    val = f(5);
    printf("val = %d\n", val); //7
    
    return 0; 
}
*/


int f(int n);
int g(int m);

int main(void)
{
    int val; 

    val = f(5);
    printf("val = %d\n", val); //10
    
    return 0; 
}

int f(int n)
{
    n = g(n);

    return n; 
}

int g(int m)
{
    m *= 2; 
    return m; 
}