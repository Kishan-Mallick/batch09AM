/*
    -> WAP to check number is even or odd.

    Ternary Operator

    num % 2 == 0 ? printf("Number is even\n") : printf("Number is odd\n");


*/

#include<stdio.h>
int main()
{
    int num;

    printf("Enter the number\n");
    scanf("%d",&num);

    if(num % 2 == 0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }

    return 0;
}