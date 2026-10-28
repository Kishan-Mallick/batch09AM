/*
    age is above 18
    user indian nationality

    WAP to take input of a number and check number is positive or negative

    WAP to take input of number and check number is even or odd.
*/
#include<stdio.h>
int main()
{
    int age;
    int ch;
    printf("Enter the age\n");
    scanf("%d",&age);

    printf("If you are indian nationalist press 1\n");
    scanf("%d",&ch);

    age >= 18 && ch == 1 ? printf("User is eligible for voting\n") :
    printf("User is not eligible for voting..\n");

    return 0;
}