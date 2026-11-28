/*
    -> WAP to calculate power of x to the y

    user input x = 2
                y = 3

                2 * 2 * 2
*/

#include<stdio.h>
int main()
{
    int x;
    int y;

    printf("Enter the value of x\n");
    scanf("%d",&x);

    printf("Enter the value of y\n");
    scanf("%d",&y);

    int i = 1;
    int ans = 1;
    while(i<=y)
    {
        ans = ans * x;
        i++;
    }

    printf("Ans : %d\n",ans);

    return 0;
}