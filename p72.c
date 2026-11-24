/*
    -> WAP to print the sum of even numers till n terms
*/


#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(int i = 1;i <= n;i++)
    {
        if(i % 2 == 0)
        {
            sum = sum + i;
        }
    }

    printf("Sum : %d\n",sum);
    
    return 0;
}