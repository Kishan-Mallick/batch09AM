/*
    > WAP to count the factors of given number
*/

#include<stdio.h>
int main()
{
    int n;
    int count = 0;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(int i = 1;i<=n;i++)
    {
        if(n%i == 0)
        {
            count++;
        }
    }

    printf("Total Factor count : %d\n",count);
    return 0;
}