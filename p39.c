/*
    Ladder if else.....

    syntax:-

    if(condition)
    {
        //body of if
    }
    else if(condition)
    {
        //body of else if
    }
    else if(condition)
    {
        //body of else if
    }
    else
    {
        //body of else
    }
   

   -> WAP to take input of 3 numbers and chec the greatest one.

*/

#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;

    printf("Enter number A\n");
    scanf("%d",&a);
    printf("Enter number B\n");
    scanf("%d",&b);
    printf("Enter number C\n");
    scanf("%d",&c);

    if(a > b && a > c)
    {
        printf("A is greater\n");
    }
    else if(b > a && b > c)
    {
        printf("B is greater\n");
    }
    else
    {
        printf("C is greater\n");
    }

    return 0;
}