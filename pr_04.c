#include<stdio.h>
void sumAndavg(int i, int j, int *sum, float *avg);

int main(){ 
    int a, b, sum;
    float avg;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    sumAndavg(a, b, &sum, &avg);
    printf("The sum of the two number is %d  \n", sum);
    printf("The average of the two number is %f  \n", avg);
    return 0;
}

void sumAndavg(int i, int j, int *sum, float *avg){
    *sum = i + j;
    *avg = (float)(*sum)/2;
}