int* a = (int*)malloc(n*sizeof(int))

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number;
    int* a;
    printf("How many do you want to input")
    scanf("%d", &number);
    
    a = (int*)malloc(number*sizeof(int));  //开头的（int*）是因为， malloc返回的是void*， 我们需要的是int*
    //把a当数组来用。 
    for(int i = 0; i < number; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = number - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    free(a);
    
    return 0;
}

#include <stdlib.h>
void* malloc (size_t size);

向malloc申请的空间的大小是以字节为单位的。
返回的是void*， 需要转换为自己需要的类型， (int*)malloc(n*sizeof(int))


没空间了？
如果申请失败则返回0， 或者NULL。 
//查看你的电脑能分配多少空间。
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    void *p;
    int cnt = 0;
    while ((p = malloc(100*1024*1024))){
        cnt++;
    }
    printf("%d MB", cnt);
    return 0;
}



