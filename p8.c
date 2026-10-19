#include<stdio.h>
int main()
{
    int a;
    int b;
    int res;

    printf("Enter the value of a\n");
    scanf("%d",&a);

    printf("Enter the value of b\n");
    scanf("%d",&b);

    res = a%b;

    printf("Addition of a & b : %d\n",res);

    return 0;
}