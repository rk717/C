#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int ZhangSan; //为int再重新多取一个名字，ZhangSan等价于int

typedef struct Student 
{
    int sid;
    char name[100];
    char sex;
}ST;

int main(void)
{
    struct Student st; //等价于 St st;
    struct Student* ps = &st; //等价于St* ps;

    ST st2;
    st2.sid = 200;
    printf("%d", st2.sid);


    // int i = 10; //等价于 ZhangSan i = 10
    // ZhangSan j = 20;
    // printf("%d", j);

    return 0;
}

/*
typedef struct Student 
{
    int sid;
    char name[100];
    char sex;
}* PST;  //PST等价于 struct Student* 

int main(void)
{
    struct Student st;
    PST ps = &st; 
    ps->sid = 99;
    printf("%d\n", ps->sid);  //99
}
*/

/*
typedef struct Student 
{
    int sid;
    char name[100];
    char sex;
}* PST, STU; //等价于 ST 代表了 struct Student, PST代表了struct Student*

int main(void)
{
    STU st; //struct Student st;

    PSTU ps = &st; //struct Student* ps = &st;

    ps->sid = 99;
    printf("%d", ps->sid);
}
*/