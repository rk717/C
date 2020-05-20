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

int main()
{
    int len;
    struct Student* pArr; 
    int i, j;
    struct Student t;

    printf("Please input how many students: \n");
    printf("len = ");
    scanf("%d", &len);

    //动态的构造一维数组
    pArr = (struct Student*)malloc(len*sizeof(struct Student));

    //接受学生信息
    for(i = 0; i < len; ++i)
    {
        printf("Please input %d student's information:  \n", i+1);
        printf("age = ");
        scanf("%d", &pArr[i].age); //&(pArr+i)->age  &(*(pArr+i)).age
        //(*(pArr+i)).age 是值
        //或者 （pArr+i)->age
        //p[i] 是 *(p+i)

        printf("name = ");
        scanf("%s", pArr[i].name); //name是数组名，本身就已经是数组首元素的地址，所以pArr[i].name, 不能改成&pArr[i].name
                    //(pArr+i)->name
                    //(*(pArr+i)).name

        printf("score = ");
        scanf("%f", &pArr[i].score); 
    }

    //按成绩升序来排序，冒泡算法
    for(i = 0; i < len-1; ++i)
    {
        for(j = 0; j < len-1-i; ++j)
        {
            if(pArr[j].score > pArr[j+1].score)
            {
                t = pArr[j];
                pArr[j] = pArr[j+1];
                pArr[j+1] = t;
            }
        }
    }

    //print out
    for(i = 0; i < len; ++i)
    {
        printf("The %d student's information: ", i+1);
        printf("age = %d\n", pArr[i].age);
        printf("name = %s\n", pArr[i].name);  //地址就是数组
        printf("score = %f\n", pArr[i].score);

        printf("\n");
    }

    return 0;
}