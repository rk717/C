#include <stdio.h>
#include <string.h>

//结构体不是变量，是一个新的数据类型
struct Student
{
    int sid;
    char name[200];
    int age;
};

int main(void)
{
    struct Student st = {1000, "James", 20};
    printf("%d %s %d\n", st.sid, st.name, st.age);

    
    
    st.sid = 99; 
    
    //st.name = "lisi"; //error C语言里字符串不可以直接赋值
    strcpy(st.name, "Robert");
    
    st.age = 19;

    printf("%d %s %d\n", st.sid, st.name, st.age);


    return 0;
}

