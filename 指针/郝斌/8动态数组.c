#include <stdio.h>
#include <stdlib.h>

//动态构造一维数组

int main()
{   
    //静态数组
    int a[5];  //如果int 占4个字节，则本数组总共占20个字节，每四个字节被当作了一个int变量来使用

    //动态数组
    int len;
    printf("please input how many numbers wolud you like to put in:");
    scanf("$d", &len); //5
    int* pArr;
    pArr = (int*)malloc(4*len); //20 4*5  int pArr[len]
    
    //对动态一维数组进行赋值
    for(int i = 0; i < len; i++)
    {
        scanf("%d", &pArr[i]); //pArr + i
    }
    return 0;

    //对动态内存数组进行输出
    for(int i = 0; i < len; i++)
    {
        printf("%d", pArr[i]); //*(pArr+i)
    }

    free(pArr); //释放掉动态分配的数组
}