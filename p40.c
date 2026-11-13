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
            printf("Monday\n");
        break;

        case 2:
            printf("Tuesday\n");
        break;

        case 3:
            printf("Wednesday\n");
        break;

        case 4:
            printf("Thursday\n");
        break;

        case 5:
            printf("Friday\n");
        break;

        case 6:
            printf("Saturday\n");
        break;

        case 7:
            printf("Sunday\n");
        break;

        default:
            printf("Invalid Input\n");
        break;
    }

    return 0;
}