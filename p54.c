/*
    Write a C program to input month number and print number of days in that month.

    jan 31
    feb 28/29
    mar 31
    apr 30
    may 31
    june 30
    july 31
    aug 31
    sep 30
    oct 31
    nov 30
    dec 31
*/
#include<stdio.h>
int main()
{

    int num;
    printf("Enter the number\n");
    scanf("%d",&num);

    if(num == 1 || num == 3 || num == 5 || num == 7 || num == 8 || num == 10 || num == 12)
    {
        printf("These months have 31 days\n");
    }
    else if(num == 2)
    {
        printf("Month ahave either 28 / 29 days\n");
    }
    else
    {
        printf("These month have 30 days\n");
    }

    return 0;
}