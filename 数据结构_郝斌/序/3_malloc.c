#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // int a[5] = {4, 10, 2, 8, 6};  //静态数组

    int len;
    int i;
    printf("Please input how long the array you want: \n");
    scanf("%d", &len);
    int* pArr = (int*)malloc(sizeof(int)*len);  
    
    // *pArr = 4; //类似于 a[0] = 4;  pArr[0]
    // pArr[1] = 10; //类似于a[1] = 10;

    //我没可以把pArr当做一个普通数组来用
    for(i = 0; i < len; ++i)
    {
        scanf("%d", &pArr[i]);
    }

    for(i = 0; i < len; ++i)
    {
        printf("%d", pArr[i]);
    }

    free(pArr); //吧pArr所代表的动态分配的20个字节的内存释放



    return 0;
}