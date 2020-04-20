用指针相加和减去两个数

#include <stdio.h>

int main()
{
    int n1 = 10, n2 = 20;
    int* m1 = NULL;
    int* m2 = NULL;

    m1 = &n1; 
    m2 = &n2;
    int sum = *m1 + *m2;
    int sub = *m1 - *m2;
    printf("%d %d", sum, sub);
}

//30 -10

//////////////////////////////////////////
swap 两个数

#include <stdio.h>

void swap(int* a, int* b)
{
    
    int tmp = *a;
    *a = *b;
    *b = tmp;

}

int main()
{
    int m = 5, n = 6;
    swap(&m, &n);
    printf("%d %d ", m, n);
}
////////////////////////////////////////////
输入输出数组
#include <stdio.h>

int main()
{
    int n; 
    scanf("%d", &n);
    int myarr[n];
    int* arr = NULL;
    arr = myarr;  //Pointer to arr[0]


    for(int i = 0; i < n; i++)
    {
        scanf("%d", arr+i);  //move pointer to next array element
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d\n", *(arr+i)); //print value
    }
}

///////////////////////////////////////////////
复制数组a到b
#include <stdio.h>
#define MAX_SIZE 100
void printArray(int* arr, int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d, ", *(arr+i));
    }
}

int main()
{
    int sourse_arr[MAX_SIZE], dest_arr[MAX_SIZE];
    int size, i;

    int* sorurse_ptr = NULL;
    int* dest_ptr = NULL;
    sorurse_ptr = sourse_arr;
    dest_ptr = dest_arr;

    int* end_ptr = NULL;

    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", (sorurse_ptr + i));
    }

    end_ptr = &sorurse_ptr[size-1];

    printf("\nSource array before copying: ");
    printArray(sourse_arr,size);
    printf("\nDestination array before copying: ");
    printArray(dest_arr,size);

    while(sorurse_ptr < end_ptr)
    {
        *dest_ptr = *sorurse_ptr;
        sorurse_ptr++; 
        dest_ptr++;
    }

    printf("\nSourse array after copying: ");
    printArray(sourse_arr,size);

    printf("\nDestination array after copying: ");
    printArray(dest_arr, size);
}
