#include <stdio.h>
#include <stdlib.h>

int addition (int a , int b);

int main()
{
    printf("1 + 2 = %d\n", addition(1, 2));
    return 0;
}

int addition (int a , int b)
{
    return a+b ;
}
