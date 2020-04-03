C语言提供了一个叫做 typedef 的功能来声明一个已有的数据类型的新名字。

    typedef int Length;

    使得 Length 成为 int 类型的 别名。

    这样，Length 这个名字就可以替代int 出现在变量定义和参数声明的地方了：
    Length a,b,len;
    Length numbers[10];

typedef long int64_t;
typedef struct ADate{
  int month;
  int day;
  int year;
}Date;  //Date 是新的名字。

Date d = {9,1,2005};

Date 就等于 struct Adate


typedef struct{
  int month;
  int day;
  int year;
}Date;   //struct 命名为date


