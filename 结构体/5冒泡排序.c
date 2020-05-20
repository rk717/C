#include <stdio.h>

void sort(int* a, int len)
{
    int t; 
    for(int i = 0; i < len-1; i++)
    {
        for(int j = 0; j < len-1-i; j++)
        {
            if(a[j] > a[j+1])  // > 表示升序， < 表示降序
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
}
/*
10, 2, 8, -8, 11, 0   i = 0
2, 10, 8, -8, 11, 0   j = 0  j < 5
2, 8, 10, -8, 11, 0   j = 1
2, 8, -8, 10, 11, 0   j = 2
2, 8, -8, 10, 0, 11   j = 4
*/
int main(void)
{
    int a[6] = {10, 2, 8, -8, 11, 0};
    
    sort(a, 6);

    for(int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");


    return 0;
}