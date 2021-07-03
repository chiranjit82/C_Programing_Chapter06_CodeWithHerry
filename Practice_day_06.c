// #include<stdio.h>

// int main(){
//     // int i = 12;
//     // int *j = &i;
//     // printf("%d \n", i) ;
//     // printf("%d \n", *j) ;
//     // printf("%u \n", &i);
//     // printf("%u \n", j);

//     // Practce Set 01:
//     // int i = 10;
//     // int *j = &i;
//     // printf("The address of the variable i is %u \n", j);
//     // printf("The value of the variale i is %d \n", *j);

//     // printf("\nHello World");
//     return 0;
// }

// // Practice Set 02:
// #include<stdio.h>
// void fun (int i);

// int main(){ 
//     int i = 15;
//     int *j = &i;
//     printf("The address of i is %u \n", &i);
//     fun(i);
//     return 0;
// }
// void fun (int i) {
//     printf("The address of the variable of i is %u", &i);
// }
// // Two address are different.


// // Practice Set 03:
// #include<stdio.h>
// void fun (int *i);

// int main(){ 
//     int i;
//     printf("Enter the number: ");
//     scanf("%d", &i);
//     printf("The value of i before call function is %d \n", i);
//     fun(&i);
//     printf("The value of i after call function is %d \n", i);
//     return 0;
// }
// void fun (int *i) {
//     (*i) = (10 * (*i));
// }

//Practice Set 04:
// #include<stdio.h>
// void fun (int a, int b, int *sum, float *avg);

// int main(){ 
//     int num1, num2;
//     printf("Enter the number 1: ");
//     scanf("%d", &num1);
//     printf("Enter the number 2: ");
//     scanf("%d", &num2);
//     int sum =0;
//     float avg = 0;
//     fun(num1,num2,&sum,&avg);
//     printf("The sum of the two number %d \n", sum);
//     printf("The avg of the two number %f \n", avg);
//     return 0;
// }
// void fun (int a, int b, int *sum, float *avg) {
//     *sum = (a + b);
//     *avg = (*sum) / 2.0;
// }

// Practice set 05:
// #include<stdio.h>

// int main(){ 
//     int i = 19;
//     int *j = &i;
//     int **k = &j;
//     printf("The value of the i is %d", (**k));
//     return 0;
// }

// Practice set 06:
// #include<stdio.h>
// void fun (int i);

// int main(){ 
//     int i;
//     printf("Enter the number: ")   ;
//     scanf("%d", &i);
//     printf("The value of i before call function is %d \n", i);
//     fun(i);
//     printf("The value of i before call function is %d \n", i);
//     return 0;
// }
// void fun (int i) {
//     i = i * 10;
// }