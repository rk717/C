结构作为函数参数。

int numberOfDays(struct date d)
整个结构可以作为参数的值传入函数，
这时候是函数内新建一个结构变量，并复制调用者的结构的值。
也可以返回一个结构。

输入结构：
 没有直接的方式可以一次 scanf 一个结构。
 

指向结构的指针：

struct date{
  int month;
  int day;
  int year;
}myday;

struct date *p = &myday;   //*p = myday

(*p).month = 12;
或
p -> month = 12;

用->表示指针所指的结构变量中的成员。
 
