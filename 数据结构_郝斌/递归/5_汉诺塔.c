#include <stdio.h>

/*
一次只能移动一个盘子
移动过程中，大盘子永远不能放在小盘子上面

伪算法：
    if(n>1)
    {
        先把A柱子上的前n-1个盘子从A借助C移到B
        将A柱子上的第n个盘子直接移到C
        再将B柱子上的n-1个盘子借助A移到C
    }
*/
void hannuota(int n, char A, char B, char C)
{
    //如果是一个盘子
    //    直接将A柱子上的盘子从A移到C
    //否则
    //    先将A柱子上的n-1个盘子借助C移到B
    //    直接将A柱子上的盘子从A移到C
    //    最后将B柱子上的n-1个盘子借助A移到C

    if(1 == n)
    {
        printf("Move %d disk from %c to %c\n", n, A, C);
    }
    else
    {
        hannuota(n-1, A, C, B);
        printf("Move %d disk from %c to %c\n", n, A, C);
        hannuota(n-1, B, A, C);
    }
    
        

}

int main(void)
{
    //定义哈诺塔的三根柱子
    char ch1 = 'A';
    char ch2 = 'B';
    char ch3 = 'C';
    int n;

    printf("Please input the disks amount: ");
    scanf("%d", &n);

    hannuota(n, 'A', 'B', 'C');


    return 0; 
}