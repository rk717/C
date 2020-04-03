#include <stdio.h>

int main(){
  int numbers[5],i,j,tmp;
  numbers[0] = 20;
  numbers[1] = 1;
  numbers[2] = 14;
  numbers[3] = 41;
  numbers[4] = 11;

  for(i=0; i<5; i++)
  {
    for(j=i+1; j<5; j++)
    {
        if(numbers[j]<numbers[i])
        {
            tmp = numbers[i];
            numbers[i] = numbers[j];
            numbers[j] = tmp;
        }
    }
  }

  for(i = 0; i < 5; i++)
  {
      printf("%d ", numbers[i]);
  }
}
