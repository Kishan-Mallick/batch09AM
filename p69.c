/*
    Natural Number -> 1 - nth tearm

    n = 10

    1 + 2 + 3 + 4 + 5 + 6 +7 + 8 + 9 + 10  = sum
*/

#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter the valu of n\n");
    scanf("%d",&n);

    for(int i = 1; i <= n;i++)
    {
        sum = sum + i;
    }

    printf("Sum of natural number : %d\n",sum);
    return 0;
}