#include<stdio.h>
void multi(int *a);

int main() 
{
    int a;
    printf("Enter the value: ");
    scanf("%d", &a);
    multi(&a);
    printf("The value of the variable is %d", a);
    return 0;
}

void multi(int *a){
    *a = *a*10;
}