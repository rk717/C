#include <stdio.h>

int add(int num)
{
    if(num <= 99)
    {
        return num + add(num+1);
    }
}


int main(void)
{
    printf("%d", add(1));

    return 0; 
}