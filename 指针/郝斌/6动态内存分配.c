/*
假设p指向char类型变量（1个字节）
假设q指向int类型变量（4个字节）
假设r指向double类型变量（8个字节）

p，q，r 本身所占的字节数是一样的

一个指针变量， 无论它指向的变量占几个字节
该指针变量本身只占四个字节

一个变量的地址使用该变量首字节的地址来表示

*/


/*
动态内存分配

传统数组的缺点：
    1.数组长度必须事先制定，且只能是常数，不能是变量
    2.传统形式定义的数组，该数组的内存程序员无法手动释放
      在一个函数运行期间，系统为该函数中数组所分配的空间
      会一直存在，直到该函数运行完毕时，数组的空间才会释放
    
    3.数组的长度一旦定义，其长度就不能在更改
      数组的长度不能在函数运行的过程中动态的扩充或缩小

    4.A函数定义的数组，在A函数运行期间可以被其他函数使用，
      但A函数运行完毕之后，A函数中的数组将无法被其他函数使用

      
为什么需要动态分配内存

动态内存分配举例_动态数组的构造

静态内存和动态内存的比较

跨函数使用内存的问题
*/