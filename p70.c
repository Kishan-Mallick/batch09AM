/*
    -> WAP to print the factorial given number.

    number = 5
    5! = 5 * 4 * 3 * 2 * 1
*/

#include<stdio.h>
int main()
{
    int n;
    int factorail = 1;
    printf("Enter the valu of n\n");
    scanf("%d",&n);

    for(int i = 1; i <= n;i++)
    {
        factorail = factorail * i;
    }

    printf("Factorial of given number number : %d\n",factorail);
    return 0;
}