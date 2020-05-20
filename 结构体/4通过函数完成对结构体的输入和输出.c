#include <stdio.h>
#include <string.h>

struct Student
{
    int age;
    char sex;
    char name[100];
}; //分号不能省

/*
指针的优点
    快速的传递数据，减少内存的耗用
    使函数返回一个以上的值
*/

void InputStudent (struct Student* pstu);
void OutputStudent (struct Student* ss);
int main(void)
{
    struct Student st;

    InputStudent(&st); //对结构体变量输入
    OutputStudent(&st); //对结构体变量输出 可以发送st的地址，也可以发送st的内容。

    return 0;
}

void InputStudent(struct Student* pstu)
{
    (*pstu).age = 10; //pstu -> age = 10;
    strcpy((*pstu).name, 'James'); //不能写成 stu.name = "James"
        //strcpy(pstu->name, 'James');
    (*pstu).sex = 'F'; //pstu->sex = 'F';
}

void OutputStudent(struct Student* ss)
{
    printf("%d %c %s", (*ss).age, (*ss).sex, (*ss).name);
}

