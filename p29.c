/*
    WAP to take input of 2 peron age and check who is elder

    2 person age input -> condtion -> answer
*/

#include<stdio.h>
int main()
{
    int age1;
    int age2;

    printf("Enter person 1 age\n");
    scanf("%d",&age1);

    printf("Enter person 2 age\n");
    scanf("%d",&age2);

    if(age1 > age2)
    {
        printf("person 1 is elder\n");
    }
    else
    {
        printf("person 2 is elder\n");
    }

    return 0;
}