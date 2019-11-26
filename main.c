#include <stdio.h>
#include <stdlib.h>

int addition (int a , int b);

int main()
{
    printf("L’addition de a et de b vaut %d\n", addition(1,4));
    return 0;
}

int addition (int a , int b)
{
    return a+b ;
}
