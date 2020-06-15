#include <stdio.h>

/*
递归使用栈来实现的
    定义：
        一个函数自己直接或间接调用自己

*/
void f(); 
void g();
void k();

void f()
{
    printf("FFFF\n");
    g();
    printf("1111\n");
}

void g()
{
    printf("GGGG\n");
    k();
    printf("2222\n");
}

void k()
{
    printf("KKKK\n");
}


int main(void)
{
    f();   //FFFF GGGG KKKK 2222 1111

    return 0; 
}