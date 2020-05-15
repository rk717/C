input : a11472o5t6
output: 1 1 4 7 2 5 6 



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int* number = (int*) malloc(10 * sizeof(int));
    char c;
    
    for(int i = 0; i < 10; i++)
    {
        number[i] = 0;
    }
        

    while(scanf("%c", &c) == 1)
    {
        if(c >= '0' && c <= '9')
        {
            (*(number+(c-'0')))++;
        }
            
    }
        
    
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", number[i]);
    }

}
