/*
    -> WAP to take the input of length and breath of rectangle and calculate the area.

    -> WAP to take the input of side of square and calculate the area.

    -> WAP to take the input of base and height of triangle and calculate the area.

    -> WAP to take the input of 5 different subject marks and calculate the average

    -------------------------

    -> WAp to take input of radius and calulate the area of circle

    -> WAp to take input of radius and calulate the circumferance of circle

    -> WAP to take the input of distance in meter and covert it to KM.

    -> WAP to take the input of distance in KM and covert it to meter.

    -> WAP to take the input of temperature in celcius and covert it to ferhen.

    -> WAP to take the input of temperature in feren and covert it to celcius.
*/

#include<stdio.h>
int main()
{
    int base;
    int height;
    float area;

    printf("Enter the base of the triangle\n");
    scanf("%d",&base);

    printf("Enter the height of the triangle\n");
    scanf("%d",&height);

    area = 0.5 * base * height;

    printf("Area of the triange : %g\n",area);

    return 0;
}