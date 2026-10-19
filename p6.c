#include<stdio.h>
int main()
{
    int a;
    int b;
    int ans;

    printf("Ente the value of a\n");
    scanf("%d",&a);

    printf("Ente the value of b\n");
    scanf("%d",&b);

    ans = a + b;
    printf("Addition of 2 numbers %d & %d is %d\n",a,b,ans);

    return 0;
}