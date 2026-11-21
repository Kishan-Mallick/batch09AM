/*
    WAP to print the number from 1 to nth term
*/

#include<stdio.h>
int main()
{
    int i;
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(i = 1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
