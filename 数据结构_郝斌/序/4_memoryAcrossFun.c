#include <stdio.h>
#include <stdlib.h>

// int f();

// int main(void)
// {
//     int i = 10;
    
//     i = f();
//     printf("i = %d\n", i);

//     return 0;
// }

// int f()
// {
//     int j = 20;
//     return j;
// }


struct Student
{
    /* data */
    int sid;
    int age;
};

struct Student* CreateStudent(void);
void showStudent(struct Student*);

int main(void)
{
    struct Student* ps;

    ps = CreateStudent();
    showStudent(ps);

    return 0;
}

struct Student* CreateStudent(void)
{
    struct Student* p = (struct Student*)malloc(sizeof(struct Student));
    p->sid=99;
    p->age=88;
    return p;
}

void showStudent(struct Student* pst)
{
    printf("%d %d\n", pst->sid, pst->age);
}