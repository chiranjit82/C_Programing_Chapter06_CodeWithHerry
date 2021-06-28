#include<stdio.h>
void func(int i);

int main(){ 
    int i = 10;
    printf("The value of i before call %d \n", i);
    func(i);
    printf("The value of i after call %d \n", i);
    return 0;
}
void func(int i){
    i = i*10;
}