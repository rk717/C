#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
    int data;
    struct Node* pNext;
}NODE, *PNODE;

PNODE create_list();
void traverse_list(PNODE pHead);

//判断链表是否为空
bool is_empty(PNODE pHead);

//求链表长度
int length_list(PNODE); 

//插入链表
bool insert_list(PNODE, int, int); //插入哪个链表，在什么文职进行插入，插入的值

//删除链表
bool delete_list(PNODE, int, int*); //删除那个链表，删除这个链表里的哪个节点，把这个删除的节点放到第三个参数里面
//delete_list(pHead, 3, &val); pHead指向的链表，第三个节点删除，删除的数据放到val里

//排序
void sort_list(PNODE);

int main(void)
{
    int val;
    PNODE pHead = NULL;
    pHead = create_list();

    traverse_list(pHead);

    //insert_list(pHead, 4, 33);
    if( delete_list(pHead, 4, &val) )
    {
        printf("Sucess, delete\n");
    }
    else
    {
        printf("not success delete, the node doesn't exit\n");
    }
    
    traverse_list(pHead);
    // if( is_empty(pHead) )
    // {
    //     printf("Link list is empty\n");
    // }
    // else
    // {
    //     printf("Link list has value\n");
    // }
    
    // int len = length_list(pHead);
    // printf("The length of the linked list is %d\n", len);

    //sort_list(pHead);
    //traverse_list(pHead);

    return 0;
}

PNODE create_list()
{
    PNODE pHead = (PNODE)malloc(sizeof(NODE));
    if(NULL == pHead)
    {
        printf("Memory allocate error\n");
        exit(-1);
    }

    PNODE pTail = pHead;
    pTail -> pNext = NULL;

    int len;
    printf("How many Nodes would you like to put in this linked list? \n");
    scanf("%d", &len);

    int val;
    for(int i = 0; i < len; ++i)
    {
        printf("Please input the %d Node data: \n", i+1);
        scanf("%d", &val);

        PNODE pNew = (PNODE)malloc(sizeof(NODE));
        if(NULL == pNew)
        {
            printf("Memory allocate error\n");
        }
        pNew -> data = val;
        
        pTail -> pNext = pNew;
        pNew -> pNext = NULL;
        pTail = pNew;
    }
    return pHead;
}

void traverse_list(PNODE pHead)
{
    PNODE p = pHead -> pNext;
    while (NULL != p)
    {
        printf("%d ", p->data);
        p = p->pNext;

    }
    printf("\n");
    return;
}

bool is_empty(PNODE pHead)
{
    //如何判断链表为空，当pHead -> pNext == NULL 时
    if(NULL == pHead -> pNext)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int length_list(PNODE pHead)
{
    int len = 0;
    PNODE p = pHead -> pNext; 
    
    while( NULL != p  )
    {
        
        ++len;
        p = p->pNext;
    }
    //printf("%d", len);
    return len;
}

void sort_list(PNODE pHead)
{
    int t;
    PNODE p, q;
    int len = length_list(pHead);
    int i, j;
    for( i = 0, p = pHead -> pNext; i < len-1; ++i, p = p -> pNext )
    {
        for( j = i + 1, q = p -> pNext; j < len; ++j, q = q -> pNext )
        {
            if(p->data > q->data) //类似于数组中的： t = a[i]
            {
                t = p -> data; 
                p ->data = q -> data;
                q -> data = t;
            }
        }
    }
    return;
}

//在pHead所指向链表的第pos个节点的前面插入一个新的节点，
//该节点的值是val,并且pos 的值 从 1 开始
bool insert_list(PNODE pHead, int pos, int val)
{
    int i = 0;

    PNODE p = pHead;

    while(NULL != p && i < pos - 1)
    {
        p = p -> pNext;
        ++i;
    }

    if(i > pos - 1 || NULL == p)
    {
        return false;
    }
    //前面的所有步骤让 p 已经指向了 pos - 1 了

    PNODE pNew = (PNODE)malloc(sizeof(NODE));
    if(NULL == pNew)
    {
        printf("Memory allocation error\n");
        exit(-1);
    }

    pNew -> data = val;

    PNODE q = p -> pNext;
    p->pNext = pNew; //把pNew放在p 后面
    pNew->pNext = q; //q继续等于最后的

    return true;

}

bool delete_list(PNODE pHead, int pos, int* pVal)
{
    int i = 0;
    PNODE p = pHead;

    while(NULL != p->pNext && i < pos - 1) //pos-1 是因为，如果你要删除第5个，你要找到第四个节点的位置
    {
        p = p->pNext;
        ++i;
    }

    if(i > pos-1 || NULL == p->pNext)
    {
        return false;
    }

    PNODE q = p->pNext; //先把需要删除的节点保留下来
    *pVal = q -> data;

    //删除p节点后面的节点
    p->pNext = p->pNext->pNext;
    free(q);
    q = NULL;

    return true;
    
}

/*
算法：
    狭义的算法与数据的存储方式密切相关
    广义的算法与数据的存储方式无关
    泛型：
        利用某种技术达到的效果就是：不同的存数方式，执行的操作是一样的


*/