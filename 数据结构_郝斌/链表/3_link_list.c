#include <stdio.h>
#include <stdlib.h>

//分配了一个不存放有效数据的头节点
typedef struct Node
{
    int data;//数据域
    struct Node* pNext; //指针域
}NODE, *PNODE; 
//NODE等价于struct Node
//PNODE 等价于struct NODE*

//函数声明
PNODE create_list(void);
void traverse_list(PNODE pHead);

int main(void)
{
    //头指针
    PNODE pHead = NULL; //等价于 struct Node* pHead = NULL;
    
    pHead = create_list(); 
    //create_list()功能：创建一个非循环单链表，并将该链表的头节点的地址赋给PHead
    //这里需要的是返回地址

    traverse_list(pHead);

    return 0; 
}

PNODE create_list(void) //返回的是指针类型，就是返回地址
{
    int len; //用来存放有效节点的个数
    int i;
    int val; //用来临时存放用户输入节点的值 

    //分配了一个不存放有效数据的头节点
    PNODE pHead = (PNODE)malloc(sizeof(NODE));
    if(NULL == pHead)
    {
        printf("Memory allocate error! \n");
        exit(-1);
    }
    PNODE pTail = pHead;
    pTail -> pNext = NULL;

    printf("please input how many nodes you want to put in: len = ");
    scanf("%d", &len);

    for(i = 0; i < len; ++i)
    {
        printf("Please input NO.%d Node valuse: ", i+1);
        scanf("%d", &val);

        PNODE pNew = (PNODE)malloc(sizeof(NODE)); //pNew 指着新的 node
        if(NULL == pNew)
        {
            printf("Memory allocate error !\n");
            exit(-1);
        }
        pNew -> data = val;
        
        pTail -> pNext = pNew; //pTail 里 node 指向的下一个 node 是 pNew
        pNew -> pNext = NULL;
        pTail = pNew;  //pTail = pNew 是让 pTail 也指那个 node
    }
    return pHead; //把这个新生成 的 链表 的 头 指针 传出去
}

void traverse_list(PNODE pHead)
{
    PNODE p = pHead -> pNext;

    while(NULL != p)  //只要p指向的不为空就一直输出
    {
        printf("%d ", p -> data);
        p = p -> pNext;
    }
    printf("\n");

    return;

}