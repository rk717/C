#include <stdio.h>

/*
    求阶乘
*/

/*
一般方法

int main(void)
{
    int val;

    printf("Please input a number: ");
    printf("val = ");
    scanf("%d", &val);


    int i, mult = 1; 
    for(i = 1; i <= val; ++i)
    {
        mult *= i; 
    }

    printf("%d factory is : %d ", val, mult);


    return 0; 
}

*/

//阶乘
long f(long n)
{
    if(1 == n)
    {
        return 1; 
    }
    else
    {
        return n * f(n-1);
    }    
}

int main(void)
{
    printf("%d\n", f(5));

    return 0; 
}