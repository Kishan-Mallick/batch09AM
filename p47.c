#include<stdio.h>
int main()
{
    int num1;
    int num2;
    int num3;

    printf("Enter the number 1\n");
    scanf("%d",&num1);

    printf("Enter the number 2\n");
    scanf("%d",&num2);

    printf("Enter the number 3\n");
    scanf("%d",&num3);

    if(num1 > num2 && num1 > num3)
    {
        printf("num1 is maximum\n");
    }
    else if(num2 > num1 && num2 > num3)
    {
        printf("num2 is maximum\n");
    }
    else
    {
        printf("num3 is maximum\n");
    }

    return 0;
}