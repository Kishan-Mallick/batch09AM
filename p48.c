#include<stdio.h>
int main()
{
    int num;
   
    printf("Enter the number \n");
    scanf("%d",&num);

    if(num > 0)
    {
        printf("Num is Positive\n");
    }
    else if(num < 0)
    {
        printf("Num is Negative\n");
    }
    else
    {
        printf("Num is Zero\n");
    }

    return 0;
}