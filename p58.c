/*
    Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
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

    if(x==y && y==z)
    {
        printf("Equilatteral\n");
    }
    else if(x!=y && y!=z)
    {
        printf("Scalane\n");
    }
    else
    {
        printf("Isocelles\n");
    }

    return 0;
}