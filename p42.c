/*
    Write a menu driven program to take input of a character and if the char is 's' -> calculate the area of suare
            'r' -> calculate the area of rectangle
            'c' -> area of circle
            't' -> area of traingle
*/

#include<stdio.h>
int main()
{
    char ch;
    int side, len, bre, rad, base, height;
    int area;
    const float pi = 3.14;

    printf("Press 's' -> calculate the area of square\nPress 'r' -> calculate the area of rectangle\nPress 'c' -> area of circle\nPress 't' -> area of traingle\n");

    scanf(" %c",&ch);

    switch(ch)
    {
        case 'S':
        case 's':
            printf("Enter the value of side\n");
            scanf("%d",&side);

            area = side * side;

            printf("Area of square : %d\n",area);
        break;

        case 'R':
        case 'r':
            printf("Enter the value of Len\n");
            scanf("%d",&len);

            printf("Enter the value of bre\n");
            scanf("%d",&bre);

            area = len * bre;

            printf("Area of Rectangle : %d\n",area);
        break;

        case 'C':
        case 'c':
            printf("Enter the value of rad\n");
            scanf("%d",&rad);

            area = pi * rad * rad;

            printf("Area of Circle : %d\n",area);
        break;

        case 'T':
        case 't':
            printf("Enter the value of base\n");
            scanf("%d",&base);

            printf("Enter the value of height\n");
            scanf("%d",&height);

            area = 0.5 * base * height;

            printf("Area of triangle : %d\n",area);
        break;

        default:
            printf("Invalid choice\n");
        break;
    }
}