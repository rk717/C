#include <stdio.h>

//只定义了一个数据类型，并没有定义变量，该数据类型的名字是enum Weekday
enum Weekday
{
    Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

int main()
{
    //int day;  //day 定义成 int 类型不合适
    enum Weekday day = Wednesday;
    printf("%d\n", day);  //2

    
    return 0;
}