#include <stdio.h>

int main()
{
    int x[5][2] = {{2,3},{4,5},{1,5},{4,3},{1,2} };
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d ",  x[i][j]);
        }
        printf("\n");
    }
}
