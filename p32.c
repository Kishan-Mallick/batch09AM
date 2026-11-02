/*
    WAP to take input of  triangle agles and check the traingle isvalid or not.


*/

#include<stdio.h>
int main()
{
    int a1;
    int a2;
    int a3;

    printf("Enter angle 1\n");
    scanf("%d",&a1);

    printf("Enter angle 2\n");
    scanf("%d",&a2);

    printf("Enter angle 3\n");
    scanf("%d",&a3);

    if(a1 + a2 + a3 == 180)
    {
        printf("Triangle is valid\n");
    }
    else
    {
        printf("Triangle is invalid\n");
    }

    return 0;
}