结构就是用一个变量来表达多个数据。 

#include <stdio.h>

struct date{  //通常在函数外部声明结构类型。
    int month;
    int day;
    int year;
  };

int main(int argc, char const *argv[])
{
  
  struct date today; //struct date 定义了一个变量叫 today
  
  today.month = 07;
  today.day = 31;
  today.year = 2014;
  
  printf("today's date is %i-%i-%i.\n",
    today.year, today.month, today.day);
    
   return 0;
}
----------------------------------------------------

struct point{
  int x;
  int y;
};
struct point p1, p2;
//p1 和 p2 都是point里面有x和y的值。

---------------------------------------------------
struct point {
  int x;
  int y;
}p1, p2;  //结构的两个变量，p1和p2。

//p1 和 p2 都是point 里面有 x 和 y 的值

-----------------------------------------------------
结构类型
      struct date{  //通常在函数外部声明结构类型。
    int month;
    int day;
    int year;
  };
结构变量
      struct date today; //struct date 定义了一个变量叫 today
      
------------------------------------------------------------
结构的初始化：
  struct date today = {07,31,2014};
  或
  struct date thismonth = {.month =7, .year = 2014};
  
----------------------------------------------------------

结构成员：
  结构和数组有点像： 
    数组用 【 】 运算符和下标访问其他成员。 //a[0] =10;
    
  结构用 . 运算符和名字访问其他成员。//today.day  student.firstName  pl.x  pl.y 
  
------------------------------------------
p1 = (struct point){5,10}; //相当于 p1.x = 5; p1.y = 10;
p1 = p2;  //相当于 p1.x = p2.x; p1.y = p2.y;
 
-------------------------------------------------
结构指针：
  和数组不同，结构变量的名字并不是结构变量的地址，必须使用&运算符
  //struct date *pDate = &today;
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
