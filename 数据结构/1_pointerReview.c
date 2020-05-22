#include <stdio.h>

// int main(void)
// {
//     int* p;  //p是个指针变量， int* 表示该p变量只能存储int类型变量的地址
//     int i = 10;
//     int j;

//     p = &i;
//     j = *p;
//     printf("%d\n", j);

//     return 0;
// }

/////////////////////

// void f(int* i) //不是定义了一个名字叫做*i的形参，而是定义了一个形参，该形参名字叫做i，他的类型是int*
// {
//     *i = 100;
// }
// int main(void)
// {
//     int i = 9;

//     f(&i);
//     printf("i = %d\n", i);

//     return 0;
// }

/////////////////////////

void show_array(int* p, int len)
{
    int i;
    for(i = 0; i < len; ++i)
    {
        printf("%d ", p[i]);
    }
}

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    //a[i] == *(a+i)
    //数组是连续的
    show_array(a, 5); //a等价于&a[0], &a[0]本身就是int*类型

    return 0;
}


// int* p = &i
//  p 的 地址是
//  int** q = &p
// *q = p = &i
// **q = *p = i
