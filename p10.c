// -> WAp to take input of radius and calulate the area of circle

/*
    Constant are the value that never change throughout the program..

    by using const keyword.
    using macros
*/

#include<stdio.h>
#define pi 3.14
int main()
{
    int rad;
    //const float pi = 3.14; //by usig const
    float area;

    printf("Enter the rad of the circle\n");
    scanf("%d",&rad);

    area = pi * rad * rad;

    printf("Area of cicle : %g\n",area);

    return 0;

}