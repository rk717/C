#include <stdio.h>



/*
int main()
{
    int a[5];
    printf("%#X\n", &a[0]);
    printf("%#X\n", a);
}

// 0X60FEEC
// 0X60FEEC
*/


/*
总结

一维数组名是个指针常量
它存放的是一维数组第一个元素的地址
int a [10] 这个 a  和 a[0] ， 
a 和 a[0]  的地址一样    a == &a[0]
*/

//下标和指针的关系
//如果p是个指针变量，则
//p[i] 永远等价于 *(p+i)
/*
//////////////////////////////////////////////
//函数可以输出任何一个一维数组的的内容
void f(int* pArr, int len)  //*pArr == a[0]
{
    for(int i = 0; i < len; i++)
    {
        printf("%d", *(pArr+i)); //*pArr *(pArr+1) *(pArr+2)
    }
}

int main()
{
    int a[5] = {1,2,3,4,5};
    int b[6] = {-1, -2, -3, 4, 5, -6};
    int c[100] = {1, 99, 22, 33};

    f(a, 5); //a 是int*
    f(b, 6);
    f(c, 100);
}
*/

/////////////////////

void f(int* pArr, int len)
{
    pArr[3] = 88; //*(pArr + 3)
}

int main()
{
    int a[6] = {1,2,3,4,5,6};
    printf("%d", a[3]); //4

    f(a, 6);
    printf("%d\n", a[3]); //88  *(a+3)
}