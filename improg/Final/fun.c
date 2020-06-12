#include <stdio.h>
#include "my.h"

int main(void)
{
    int a = 10;
    int b = 20;
    int c = 0;
    c = sum(a, b);
    printf("%d", c);
    return 0;
}

int sum(int num1, int num2)
{
    int ans = num1 + num2; 
    return ans; 
}