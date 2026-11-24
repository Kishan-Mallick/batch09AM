/*
    WAP to print factors of given number
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(int i = 1;i<=n;i++)
    {
        if(n%i == 0)
        {
            printf("%d is the factor\n",i);
        }
    }
    return 0;
}