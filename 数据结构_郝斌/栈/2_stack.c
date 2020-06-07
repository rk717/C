#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//栈是吃完就吐

typedef struct Node
{
    int data;
    struct Node* pNext; 
}NODE, *PNODE;

typedef struct Stack
{
    PNODE pTop; //pTop永远指向栈顶元素
    PNODE pBottom; //pBottom永远指向栈顶元素的下一个没有实际含义的元素
}STACK, *PSTACK; //PSTACK 等价于 struct Stack*

void init(PSTACK);
void push(PSTACK, int); //向哪个栈中压元素，压的哪个值
void traverse(PSTACK); //只需要一个参数
bool pop(PSTACK, int*); //因为可能删除失败，如果栈里没有这个元素的话
void clear(PSTACK pS);


int main(void)
{
    STACK S; //STSCK 等价于 struct Stack 

    init(&S); //初始化，目的是造出一个空栈

    push(&S, 1); //把1放进去，进行压栈, 不需要指定位置，因为只能放在栈底
    push(&S, 2); //把2放进去
    push(&S, 3);
    push(&S, 4);

    traverse(&S); //遍历输出

    clear(&S);
    
    traverse(&S);

    int val;  //保存出栈的值
    //pop(&S, &val); //出栈， val是出栈的值
    if( pop(&S, &val) )
    {
        printf("Successful pop out, the value is %d\n", val);
    }
    else
    {
        printf("Pop our fail.\n"); 
    }
    

    traverse(&S); //遍历输出

    return 0;
}

void init(PSTACK pS)
{
    //初始化的目的： 使pTop和pBottom指向一个栈，之后生成一个空的栈
    pS->pTop = (PNODE)malloc(sizeof(NODE));
    if(NULL == pS->pTop)
    {
        printf("The allocate memory fail."); //动态内存分配失败
        exit(-1);
    }
    else
    {
        pS->pBottom = pS->pTop; //空栈的时候 pTop 和 pBottom 指向的地方一样
        
        //清空指针域
        pS->pTop->pNext = NULL; //ps->PBottom->pNext = NULL; 效果相同
        //pS指向的S这个节点的pTop成员，它指向的一个头节点，指向的节点为空，这就是init
    }
    
}

void push(PSTACK pS, int val)
{
    PNODE pNew = (PNODE)malloc(sizeof(NODE));
    pNew->data = val;
    pNew->pNext = pS->pTop; //ps->pTop 不能改成 ps->pBottom
    pS->pTop = pNew;

    return;
}

void traverse(PSTACK pS)
{
    //定义一个指针p，p永远指向一个栈顶元素
    //我们不能改变pTop和pBottom

    PNODE p = pS->pTop;
    while(p != pS->pBottom)
    {
        printf("%d ", p->data);
        p = p->pNext;
    }
    printf("\n");

    return;
}

bool empty(PSTACK pS) //判断栈是否为空
{
    if(pS->pTop == pS->pBottom)
    {
        return true;
    }
    else
    {
        return false; 
    }
    
}

//把pS所指向的栈出栈一次，并把出栈的元素存入pVal形参所指向的变量中
//如果出栈失败，返回false，否则返回true
bool pop(PSTACK pS, int* pVal)
{
    //如果栈是空的，则出栈失败
    if ( empty(pS) ) //pS本身存放的就是S的地址
    {
        return false;
    }
    else
    {
        //删除元素
        PNODE r = pS->pTop;   //使用r来辅助
        *pVal = r->data;
        pS->pTop = r->pNext;  //改变pTop
        free(r);
        r = NULL;

        return true;
    }
}

//清空，框架还在，但是元素已经删除完
void clear(PSTACK pS) 
{
    if( empty(pS) )
    {
        return;
    }
    else
    {
        PNODE p = pS->pTop;
        PNODE q = NULL;  //来做辅助

        while (p != pS->pBottom)
        {
            q = p->pNext; 
            free(p);
            p = q; 
        } 
        pS->pTop = pS->pBottom;
    }
    
}