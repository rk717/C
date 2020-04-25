#include <stdlib.h>
#include <stdio.h>

typedef struct student
{
    int score;
    struct student* next;
} LinkList;

//初始化一个链表，n为链表节点个数

LinkList *creat(int n)
{
    //定义头节点，普通节点，尾部节点
    LinkList *head , *node, *end; 

    //分配地址
    head = (LinkList*)malloc(sizeof(LinkList));
    
    //若是空链表，则头尾节点一样
    end = head; 

    for(int i = 0; i < n; i++)
    {
        node = (LinkList*)malloc(sizeof(LinkList));
        scanf("%d", &node->score);
        end->next = node; 
        end = node; 
    }
    //结束创建
    end->next = NULL; 

    return head; 
}

//修改链表节点值
void change(LinkList* list, int n) //n为第n个节点
{
    LinkList* t = list; 
    int i = 0; 
    while(i < n && t != NULL)
    {
        t = t->next; 
        i++; 
    }

    if(t != NULL)
    {
        puts("Input the value you want ot change: ");
        scanf("%d", &t->score);
    }
    else
    {
        puts("The Node does not exist");
    }
    
}

//删除链表节点
void delet(LinkList* list, int n)
{
    LinkList* t = list, *in; 
    int i = 0; 
    while(i < n && t != NULL)
    {
        in = t; 
        t = t->next; 
        i++;
    }
    if(t != NULL)
    {
        in -> next = t -> next; 
        free(t);
    }
    else
    {
        puts("The node does not exist");
    }
    
}

//插入链表节点
void insert(LinkList* list, int n)
{
    LinkList* t = list, *in; 
    int i = 0; 
    while (i < n && t != NULL)
    {
        t = t->next;
        i++;
    }
    if(t != NULL)
    {
        in = (LinkList*)malloc(sizeof(LinkList));
        puts("Input the value");
        scanf("%d", &in->score);

        //填充in节点的指针域，也就是说把in的指针域指向t的下一个节点。 
        in->next = t->next; 

        //填充t节点的指针域，把t的指针域指向in
        t->next = in; 
    }
    else
    {
        puts("The node does not exist");
    }
    
    
}

//输出链表
while(h -> next != NULL)
{
    h = h->next; 
    printf("%d", h->score);
}
