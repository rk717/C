#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int *pInt = NULL;
    printf("指针变量pInt自己的地址是：0X%x\n", &pInt);
    //0X60fefc

    int para = 1;
    printf("变量para自己的地址是：0X%x\n", &para);
    //0X60fef8
    printf("变量para自己的值是： %x\n", para);
    //1

    pInt = &para;
    printf("指针变量pInt自己的值是： 0X%x\n", pInt);
    //0X60fef8  指针自己的值 就是 地址
    printf("指针变量pInt的他值是： %x\n", *pInt);
    //1

    int arr_int[2] = {1, 2};
    pInt = arr_int;
    printf("arr_int第一个元素arr_int[0]的地值是： 0X%x\n", pInt);
    //0X60fef0
    printf("arr_int第二个元素arr_int[1]的地值是： 0X%x\n", pInt + 1);
    //0X60fef4

    double *pDouble = NULL;
    double arr_double[2] = {1.1, 2.2};
    pDouble = arr_double;
    printf("arr_double第一个元素arr_double[0]的地址是： 0X%x\n", pDouble);
    //0X60fed8
    printf("arr_double第二个元素arr_double[1]的地址是： 0X%x\n", pDouble + 1);
    //0X60fee0

    return 0;
}

“两己三他”， 己址， 己值， 他值， 他址， 他型

己址：
    自己的地址。
    指针 pInt 作为一个变量， 与 int 变量 para 一样， 也需要存储在内存中的一段存储空间，也就是说，指针变量pInt也会有自己的地址。
    已知， para 的 地址是 0X60fef8， 那么 指针变量 pInt 的 地址是啥？？
    
    如何获取 指针变量 pInt 的 地址？
    “&” 是一个 取地址的运算符。
    printf("指针变量pInt自己的地址是：0X%x\n", &pInt);
    就是通过 “&” 来获取指针变量 pInt的 地址。 
    //0X60fefc
    
己值：
    自己的数据值。
    变量para自己的数据值是 ‘1’， 那么指针变量pint自己的数据值是多少？？
    pInt = &para;
    printf("指针变量pInt自己的值是： 0X%x\n", pInt);
    //0X60fef8  指针自己的值 就是 地址
    我们通过 ‘&’ 运算符， 将变量para的地址赋给了指针变量pInt，
    可以发现 指针pInt的值 就是 para 变量 的 地址。 
    
    变量para的地址，给了指针变量pInt的己值，这样就将指针变量pInt与变量para绑定在了一起。
    

他址：
    他人的地址，
    
    将变量para的地址给了指针pInt， 这样就将指针变量pInt与变量para绑定在了一起了。
    把 ’他人的地址‘ 赋值给了指针变量pInt的 “己值”， 
    “他人地址的他”就是 变量 para。 “他人地址的址” 就是 para的地址。
    
    para的地址，和指针pInt的值是一样的。
    
    
他值：
    他人的数据值。
    
    pInt = &para
    
    将变量para的地址给了指针变量pInt的“己值” 
    “他人的数据”的“他”，指的就是变量para。
    “他人的数据”的“值”，指的就是变量para的数据值 “1”
    
    printf("指针变量pInt的他值是:  0X%x\n", *pInt);
    
    也就是 指针变量pInt， 前面加上 “*”， 来输出指针变量的 “他值”，
    
    指针变量的 “他值”， 就是 para的数据值。
    
    *(pInt + 1) 如果把 pInt+1 看成另外一个指针，比如
    int* pTemp = pInt + 1
    *(pInt + 1) 计算的本质就是指针变量pTemp的 “他值”
    
    *pInt + 1: 用pInt的“他值”加1. 
    
    pInt[1]就是 *(pInt+1)
    
他型：
    他人的类型。
    
    int *pInt = NULL; 
    
    指针变量pInt前面的 int 并不是 说 指针变量 pInt 的 “己值” 是一个 int 类型的数据值。 
    而是说，指针变量pInt的“他值” 是一个 “int” 类型的数据值。 
    此处 指针变量pInt的“他值” 是变量 para 的数据值 “0X1”， 
    因此， 指针变量pInt前面的“int” 指的就是 数据值 “0X1” 是一个 “int” 型。
    
    声明指针时的类型是用来修饰 “他值” 的， 而不是 “己值”。
    
    int para = 1；
    变量para前面的“int"就是指变量para的类型是一个整型，此时的”int“对para来说是一个”自型“，也就是”自己的类型“的意思，
    只有指针在声明时的类型是”他型“，是“他人的类型”。
    
    
    
----------------------------------
#include <stdio.h>

int main()
{
    int *parr = NULL;
    int sum = 0; 
    int arr[3] = {1,2,3};
    parr = arr;              //先将 数组名 arr 的数据值赋值给了 pArr的己值， arr的数据值是啥？？就是 arr[0]元素的地址嘛。
                             //那么， parr的己址，就是 arr[0]的地址， 这样一来 parr就和arr[0]绑定起来了。

    // for(int i = 0; i < 3; i++)
    // {
    //     sum += *(parr+i);
    // }

    // printf("%d", sum);

    printf("%d\n", parr);    //6356716
    printf("%d\n", *parr);   //1
    printf("%d\n", &arr);    //6356716
    printf("%d\n", arr);     //6356716
}

pArr = arr;
printf("%d ", pArr[index]);
一样！！！
pArr = arr;
printf("%d ", *( pArr + index));


pArr：可以写成pArr + 0，就是加上 0 * 4 = 0个字节，此时pTemp的己值是arr[0]的地址；

pArr + 1：就是加上1 * 4 = 4 个字节，此时pTemp的己值是arr[1]的地址；

pArr + 2：就是加上2 * 4 = 8 个字节，此时pTemp的己值是arr[2]的地址；

这样，pArr + index就遍历到了数组所有元素的地址了。
    
    
既然pArr + index能够遍历到数组所有元素的地址，再使用 *(pArr + index) ，也就是*pTemp，
是不是就能获取到pTemp的他值了，这样也就变量到数组所有元素的值了！
    
    
    









https://zhuanlan.zhihu.com/p/27974028
