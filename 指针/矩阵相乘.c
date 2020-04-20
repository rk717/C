#include <stdio.h>

void minput(int mat[3][3])
{
    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            scanf("%d", (*(mat + row) + col));
        }
    }
}
void mprint(int mat[3][3])
{
    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            printf("%d ", *(*(mat + row) + col));
        }
        printf("\n");
    }
}
void mamulti(int mat1[3][3], int mat2[3][3], int res[3][3])
{
    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            int sum = 0;
            for(int i = 0; i < 3; i++)
            {
                sum += (*(*(mat1 + row) + i)) * (*(*(mat2 + i) + col));
            }

            *(*(res + row) + col) = sum;
        }
    }
}

int main()
{
    int m1[3][3], m2[3][3], m3[3][3];
    printf("Enter elements in first matrix: \n");
    minput(m1);
    printf("Enter elements in second matrix: \n");
    minput(m2);

    mamulti(m1, m2, m3);
    printf("Product of both matrices is: \n");
    mprint(m3);
}
