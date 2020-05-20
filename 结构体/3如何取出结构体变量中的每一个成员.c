#include <stdio.h>

struct Student
{
    int age;
    float score;
    char sex;
};

int main()
{
    struct Student st = {80, 66,6, 'F'};

    struct Student* pst = &st; //&st不能改成st

    pst->age = 88;  //第二种方式
    st.age = 10;    //第一种方式

    //pst->age 在计算机内部会被转化成 (*pst).age, 
    //没有为什么，这就是->的含义，这也是一种硬性规定
    //所以 pst->age 等价于 (*pst).age 也等价于 st.age，
    //是因为pst->age 转化成了(*pst).age来执行

    //pst->age 的含义：
        //pst所指向的那个结构体变量中的age这个成员

    /*
        如何取出结构体变量中的每一个成员
        1.结构体变量名.成员名
        2.指针变量名-> 成员名
            指针变量名->成员名 在计算机内部会被转化成 (*指针变量名).成员名
            的方式来执行
        这两种方式是等价的

    */
}