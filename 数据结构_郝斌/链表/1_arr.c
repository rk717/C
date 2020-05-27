#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Arr  //结构体是个数据类型，给数据类型的名字叫做 Struct Arr, 该数据类型含有三个成员，分别是pBase, len, cnt
{
    int* pBase; //存储的数组第一个元素的地址
    int len; //数组所能容纳的最大元素个数
    int cnt; //当前数组有效的元素的个数
};

void init_arr(struct Arr* pArr, int length); //初始化
bool append_arr(struct Arr* pArr, int val);  //追加
bool insert_arr(struct Arr* pArr, int pos, int val); //插入,pos的值从1开始
bool delete_arr(struct Arr* pArr, int pos, int* pVal);
int get();
bool is_empty(struct Arr* pArr);  //判断数组是否为空
bool is_full(struct Arr* pArr);
void sort_arr(struct Arr* pArr);
void show_arr(struct Arr* pArr);  //输出函数
void inversion_arr(struct Arr* pArr);  //倒置

int main(void)
{
    struct Arr arr;
    int val;

    init_arr(&arr, 6);
    show_arr(&arr);

    delete_arr(&arr, 1, &val);

    append_arr(&arr, 1);
    append_arr(&arr, 2);
    append_arr(&arr, 3);
    append_arr(&arr, 4);

    insert_arr(&arr, 6, 99);

    inversion_arr(&arr);

    sort_arr(&arr);

    return 0;
}

void init_arr(struct Arr* pArr, int length)
{
    // (*pArr).len = 99;

    pArr->pBase = (int*)malloc(sizeof(int)*length);
    if(NULL == pArr->pBase) //如果内存分配失败为NULL
    {
        printf("The memory doesn't allocate \n");
        exit(-1); //终止整个程序
    } 
    else
    {
        pArr->len = length;
        pArr->cnt = 0;
    }
    return; //函数终止了   
}

void show_arr(struct Arr* pArr)
{
    //如果数组为空，提示用户数组为空
    if(is_empty(pArr))
    {
        printf("the array is empty\n");
    }
    else
    {
        for(int i = 0; i < (pArr->cnt); ++i)
        {
            printf("%d ", pArr->pBase[i]);  //int*
        }
        printf("\n");
    }
}

bool is_empty(struct Arr* pArr)
{
    if(0 == pArr->cnt)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

bool is_full(struct Arr* pArr) //判断是否满了
{
    if(pArr->cnt == pArr->len)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

bool append_arr(struct Arr* pArr, int val)
{
    //满时返回false
    if(is_full(pArr))
    {
        return false;
    }
    //不满时追加
    else
    {
        pArr->pBase[pArr->cnt] = val;
        (pArr->cnt)++;
        return true;

    }
    
}

bool insert_arr(struct Arr* pArr, int pos, int val)
{
    int i;

    if(is_full(pArr))
    {
        return false;
    }

    if(pos < 1 || pos > pArr->cnt+1)
    {
        return false;
    }

    for(i = pArr->cnt-1; i >= pos -1; --i)
    {
        pArr->pBase[i+1] = pArr->pBase[i];
    }
    pArr->pBase[pos-1] = val;
    (pArr->cnt)++;
    return true;
}

bool delete_arr(struct Arr* pArr, int pos, int* pVal)
{
    int i;

    if( is_empty(pArr) )
    {
        return false;
    }
    if(pos<1 || pos>pArr->cnt)
    {
        return false;
    }

    *pVal = pArr->pBase[pos-1];
    
    for(i = pos; i < pArr->cnt; ++i)
    {
        pArr->pBase[i-1] = pArr->pBase[i];
    }

    (pArr->cnt)--;

    return true;

}

void inversion_arr(struct Arr* pArr)
{
    int i = 0;
    int j = pArr->cnt-1;
    int t;

    while (i < j)
    {
        t = pArr->pBase[i];
        pArr->pBase[i] = pArr->pBase[j];
        pArr->pBase[j] = t;
        ++i;
        --j;
    }
}

void sort_arr(struct Arr* pArr)
{
    int i, j, t;

    for(i = 0; i < pArr->cnt; ++i)
    {
        for(j = i+1; j < pArr->cnt; ++j)
        {
            if(pArr->pBase[i] > pArr->pBase[j])
            {
                t = pArr->pBase[i];
                pArr->pBase[i] = pArr->pBase[j];
                pArr->pBase[j] = t;               
            }
        }
    }
}