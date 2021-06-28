#include<stdio.h>

int main() 
{
    int a = 6;
    int *ptr;
    ptr = &a;
    printf("The address of %u  \n", &a);
    printf("The value of a %d  \n", *ptr);
    return 0;
}