/*
    WAP to check user is eligible for voting or nt.

    User -> age input -> condition check age >= 18 -> depanding on condition answer.

*/

#include<stdio.h>
int main()
{
    int age;

    printf("Enter the ahe\n");
    scanf("%d",&age);

    if(age >= 18)
    {
        printf("Eligible for voting\n");
    }
    else
    {
        printf("Not Eligible for voting\n");
    }
    
    return 0;
}