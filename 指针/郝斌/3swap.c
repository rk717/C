#include <stdio.h>

// int main(void)
// {
//     int a = 3;
//     int b = 5;
//     int t;

//     t = a; 
//     a = b; 
//     b = t;
//     printf("%d %d", a, b);
//     return 0;
// }

void swap2(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int m = 5;
    int n = 3;
    swap2(&m, &n);
    printf("%d %d", m, n);
}