/*
 -> WAP to print fibonacci Series.

    0 1 1 2 3 5 8 13 21 34 55........

    user - 10 fibonacci
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    int p1 = -1;
    int p2 = 1;
    int next;

    for(int i = 1;i<=n;i++)
    {
        next = p1 + p2;
        printf("%d\t",next);
        p1 = p2;
        p2 = next;
    }

    printf("\n");

    return 0;
}