/*
    WAP to take input of month day and print the month....

    1 - january
    2 - February
    3 - March
    .
    .
    .
    .
    12 - December

    13-14-15 -> Invalid Input
*/

/*
    WAP to take the input of weeknumber and print week days.

    Input -> Number -> 1-7

    1 -> Monday
    2 -> tuesday

    8 9 10 -> Invalid Input...
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);

    switch(num)
    {
        case 1:
            printf("january\n");
        break;

        case 2:
            printf("February\n");
        break;

        case 3:
            printf("March\n");
        break;

        case 4:
            printf("April\n");
        break;

        case 5:
            printf("May\n");
        break;

        case 6:
            printf("June\n");
        break;

        case 7:
            printf("July\n");
        break;

        case 8:
            printf("August\n");
        break;

        case 9:
            printf("September\n");
        break;

        case 10:
            printf("October\n");
        break;

        case 11:
            printf("November\n");
        break;

        case 12:
            printf("December\n");
        break;

        default:
            printf("Invalid Input\n");
        break;
    }

    return 0;
}