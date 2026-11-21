/*
    WAP to print the table of any number\n

    9 * 1 = 9
    9 * 2 = 18

    9 * 10 = 90
*/

#include<stdio.h>
int main()
{
    int i;
    int n;
    printf("Enter value of n\n");
    scanf("%d",&n);

    for(i = 1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }

    return 0;
}