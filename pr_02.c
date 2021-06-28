#include<stdio.h>
void printadd(int a);

int main() 
{
    int i = 7;
    printf("The address of the veriable is %u \n", &i);
    printf("The value of the variale is %d \n", i);
    printadd(i);
    return 0;
}
void printadd(int a){
    printf("The address of the variable is %u \n", &a);
}