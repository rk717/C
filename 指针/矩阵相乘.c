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

----------------------------------------------------
#include <stdio.h>
 
int main()
{
  int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
 
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of first matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);
 
  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("The multiplication isn't possible.\n");
  else
  {
    printf("Enter elements of second matrix\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
  }
 
  return 0;
}
