//uniary Operator - increment operator (++)
/*
    Post increment -> operand++
    Pre increment ->  ++operand

    increment -> increment the existing vaue by 1.

    a++ ====> a = a+1;
*/

#include<stdio.h>
int main()
{
    int a = 10;
    int b = a++;

    printf("value of a : %d\n",a);
    printf("value of b : %d\n",b);

    return 0;
}