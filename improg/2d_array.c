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


------------------------------------------------------
#include <stdio.h>

int main()
{
    /* structure to represent a Point with x and y axis values */
    struct Point
    {
        int x;
        int y;
    };

    /* array of Point structures */
    struct Point points[5] = {
        {2, 3}, {4, 5}, {1, 5}, {4, 3}, {1, 2}};

    /* loop over array and print the Point structure */
    for (int i = 0; i < 5; i++)
    {
        printf("Point %d: X: %d, Y: %d\n", i, points[i].x, points[i].y);
    }
}
