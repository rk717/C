#include <stdio.h>
#include <stdlib.h>
//动态构造存放学生信息的结构体数组
//  动态构造一个数组，存放学生的信息
//  然后按分数排序输出

struct Student
{
    /* data */
    int age;
    float score;
    char name[100];
};

void inputInfo(struct Student* p, int len);
void outputInfo(struct Student* p, int len);

int main()
{
    int len;
    struct Student* pArr; 
    int i;

    printf("Please input how many students: \n");
    printf("len = ");
    scanf("%d", &len);

    //动态的构造一维数组
    pArr = (struct Student*)malloc(len*sizeof(struct Student));

    //接受学生信息
    inputInfo(pArr, len);

    //print out
    outputInfo(pArr, len);

    return 0;
}

void inputInfo(struct Student* p, int len)
{
    int i;
    for(i = 0; i < len; ++i)
    {
        printf("Please input %d student's information:  \n", i+1);
        printf("age = ");
        scanf("%d", &p[i].age); 
        
        printf("name = ");
        scanf("%s", p[i].name); 
                   
        printf("score = ");
        scanf("%f", &p[i].score); 
    }
}

void outputInfo(struct Student* p, int len)
{
    int i;
    for(i = 0; i < len; ++i)
    {
        printf("The %d student's information: \n", i+1);
        printf("age = %d\n", p[i].age);
        printf("name = %s\n", p[i].name);  
        printf("score = %f\n", p[i].score);

        printf("\n");
    }
}