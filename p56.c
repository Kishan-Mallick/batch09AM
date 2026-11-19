/*
    Write a C program to input angles of a triangle and check whether triangle is valid or not.

    Ternary operator


*/

#include<stdio.h>
int main()
{
    int x;
    int y;
    int z;

    printf("Enter the 1st angle\n");
    scanf("%d",&x);

    printf("Enter the 2nd angle\n");
    scanf("%d",&y);

    printf("Enter the 3rd angle\n");
    scanf("%d",&z);

    if(x+y+z == 180)
    {
        printf("Triangle is valid\n");
    }
    else
    {
        printf("Triangle is not valid\n");
    }
    return 0;
}