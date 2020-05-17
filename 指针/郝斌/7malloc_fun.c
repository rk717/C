#include <stdio.h>
#include <stdlib.h>
/*
    malloc 是 memory allocation 的缩写。

*/

// int main()
// {
//     int i = 5; //分配了4个字节， 静态分配
//     int* p = (int*)malloc(4);  
//     /*
//         1.要使用malloc，必须添加 stdlib.h
//         2.malloc函数只有一个形参，并且形参是整形
//         3.形参 4 表示请求系统为本程序分配4个字节
//         4. malloc函数只能返回第一个字节的地址。
//         5. 12行分配了8个字节，p变量占4个字节，p所指向的内存也占4个字节
//         6. p本身所占的内存是静态分配的，p所指向的内存是动态分配的。
//     */
//    free(p); //free(p) 表示把p所指向的内存给释放掉。
//    printf("hello");

//     return 0;
// }

void f(int* q)
{
    *q = 200;
}

int main()
{
    int* p = (int*)malloc(sizeof(int)); //sizeof(int)返回值是int所占的字节数
    *p = 10;

    printf("%d\n", *p); //10
    f(p); //p 是int* 类型
    printf("%d'n", *p); //200
    return 0;
}



