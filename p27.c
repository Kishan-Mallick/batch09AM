/*
    If else ->

    its a control statement when the condition is true if block execute and in case of false else block execute.

    Syntax:

    if(condition)
    {
        //body of if
    }
    else
    {
        //body of else
    }

    WAP to check a number is greater than 50 or not.

    Ternary operator 

    num > 50 ? printf("Number is greater than 50\n") : printf("Number is smaller than 50\n"); 

*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);

    if(num > 50)
    {
        printf("Number is greater than 50\n"); 
    }
    else
    {
        printf("Number is smaller than 50\n");
    }

    return 0;
}