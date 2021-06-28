#include<stdio.h>
int sum(int a, int b);

int main() 
{
    int a = 5, b = 10;
    printf("The value of a and b is %d and %d \n", a, b);
    printf("The sum of a + b is %d \n", sum(a, b));
    printf("The value of a and b after call the function is %d and %d \n", a, b);
    return 0;
}
int sum(int a, int b){
    int c = a+b;
    a = 1234;
    b = 5241;
    return c;
}
