#include<stdio.h>

void func(int *a);

int main()
{
    int i = 45;
    int *ptr = &i;
    func(&i);
    printf("The value of i is %d \n", i);
    return 0;
}

void func(int *a)
{
    *a = *a + 23;
}