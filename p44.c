#include<stdio.h>
int main()
{
    int num1;
    int num2;

    printf("Enter the number 1\n");
    scanf("%d",&num1);

    printf("Enter the number 2\n");
    scanf("%d",&num2);

    if(num1 > num2)
    {
        printf("Num1 is greater\n");
    }
    else
    {
        printf("Num2 is greater\n");
    }

    return 0;
}