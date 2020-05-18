#include <stdio.h>

struct Student
{
    /* data */
    int age;
    float score;
    char sex;
};

int main(void)
{
    // int age;
    // float score;
    // char name[100];

    struct Student st = {80, 66.6, 'F'};  //struct Student 结构的变量 st


    return 0;
}

/*
为什么用结构体
    为了表示一些复杂的事物，而普通的基本类型无法满足实际要求。

什么叫结构体
    吧一些基本类型数据组合在一起形成的一个新的符合数据类型，这个叫做结构体

如何定义结构体 （三种方式，推荐使用第一种）

第一种方式 (最常用)
struct Student
{
    int age;
    float score;
    char sex;
};

第二种方式
struct Student2
{
    int age;
    float score;
    char sex;
}st2;

第三种方式
struct
{
    int age;
    float score;
    char sex;
}st3;

*/

