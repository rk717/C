#include <stdio.h>

// int main()
// {
//     int i = 10;
//     int* p = &i;
//     int** q = &p;
//     int*** r = &q;

//     //r = &p;  //error 因为r是int*** 类型， r 只能存放 int** 类型的变量地址
//     printf("i = $d", ***r); //10

// }


/*
变量名：i      p        q       r

内容：  10     1000H    2000H   3000H

地址：  1000H  2000H    3000H   4000H

类型：  int    int*     int**   int***



*/


void f(int** q)
{
    //*q 就是 p
}

void g()
{
    int i = 10;
    int* p = &i; 
    f(&p); //p是int* 类型， &p是int** 类型
}

int main(void)
{
    g();
    return 0;
}