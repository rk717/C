 // The points 
  p[0]={2,3}
  p[1]={4,5}
  p[2]={1,5}
  p[3]={4,3}
  p[4]={1,2}

  // Should become

  p[0]={1,2}
  p[1]={1,5}
  p[2]={2,3}
  p[3]={4,3}
  p[4]={4,5}

#include <stdio.h>
#include <stdlib.h>

struct point
{
    int x;
    int y;
};

int main()
{
    struct point list[5] =
    {
        {2,3},
        {4,5},
        {1,5},
        {4,3},
        {1,2},
    };
    for(int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
      {
        struct point tmp;
        if(list[i].x > list[j].x)
            {
                tmp = list[i];
                list[i] = list[j];
                list[j] = tmp;
            }
            else if(list[i].x == list[j].x && list[i].y > list[j].y)
            {
                tmp = list[i];
                list[i] = list[j];
                list[j] = tmp;
            }
        }

    }

    for(int i = 0; i < 5; i++)
    {
        printf("%d %d\n", list[i].x, list[i].y);
    }



}
