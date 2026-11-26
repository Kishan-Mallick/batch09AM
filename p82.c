/*
    While is a entry control loop

    for(intialize;conition;update)
    {
        //body of loop
    }

    Syntax:-

    intialize
    while(condition)
    {
        //body of the loop

        update;
    }


    --------------------------------------------

    application -> userID & password 
                -> unlimted -> pasword

*/

#include<stdio.h>
int main()
{
    int password = 12345;

    int pas;
    printf("Enter the correct password\n");
    scanf("%d",&pas);

    while(pas != password)
    {
        printf("Enter the correct password\n");
        scanf("%d",&pas);
    }

    printf("Welcome to the system.....!!!\n");


    return 0;
}