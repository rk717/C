#include <stdio.h>
#include <stdlib.h>

// void f(int** q) //q是个指针变量，无论q是什么类型的指针，都只占四个字节
// {
//     int i = 5;
//     //*q 等价于 p， q和**q都不等价于q
//     //*q =i //error, 因为*q = i； 等价于 p = i
//     *q = &i; //*q = p; //p = &i;
// }

// int main()
// {
//     int* p;
//     f(&p);  
//     printf("%d", *p); //5 本句语法没有问题，但是逻辑上有问题（静态变量不能跨函数使用）
// }

/*
int* p = &i;
int** q = &p;
int*** r = &q;

p = &i 然后 *p = i
q = &p; 然后 *q = p
r = &q; 所以 *r = q

**r = p
**r 又等于 *q
*/

void f(int** q)
{
    *q = (int*)malloc(sizeof(int)); //sizeof（数据类型）返回值是该数据类型所占的字符数
        //等价于 p = (int*)malloc(sizeof(int));

    //q = 5;
    //*q = 5; //p = 5;
    **q = 5; //*p = 5;


}

int main()
{
    int* p;
    f(&p);


    return 0;
}