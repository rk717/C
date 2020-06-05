#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//离散存储——链表

/*
定义：
    n个节点离散分配
    彼此通过指针相连
    每个节点只有一个前驱节点，每个节点只有一个后驱节点
    首节点没有前驱节点，尾节点没有后续节点 

    专业术语：
        首节点：第一个存储数据
        尾节点：最后一个存储数据
        
        头节点：头节点指向首节点，并不存在有效数据，方便对链表操作
                头节点数据类型和首节点类型一样

        头指针：指向头节点的指针变量
        尾指针：指向尾节点的指针变量
    
    如果希望通过一个函数来对链表进行处理，我们至少需要接受链表的哪些信息:
        只需要一个参数：头指针
        因为我们通过头指针可以推算出链表的其他所有信息


分类：
    单链表
    双链表
        每一个节点有两个指针域

    循环列表
        能通过任何一个节点找到其他所有的节点
        
    非循环链表

算法：
    遍历
    查找
    清空
    销毁
    求长度
    排序
    删除节点
    插入节点

链表的优缺点：

*/

/*

1.一个节点的生成

typedef struct Node
{
    int data; //数据域
    struct Node* pNext; //指针域
}NODE, *PNODE; // Node等价于struct Node, PNODE等价于struct Node*


int main(void)
{

    return 0;
}

*/


/*
插入一个 节点

p->pNext //表示的指针域

把 q 插入 p 和 r 之间
r = p->pNext; //p原来指针域是指向 r
p->pNext = q;  // 这时p的指针域指向 q
q->pNext = r;  // q 的指针域 指向 r
 
q->pNext = p->pNext; //这里的 p->pNext 指的是 r
p->pNext = q;  //p->pNext 指的是 把q 插入 p 后

*/

/*
删除一个 节点
p r m ，删除 r 节点

r = p->pNext;
p->pNext = p->pNext->pNext;
free(r)




*/