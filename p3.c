//Scanf() -> is used to take input from user.
/*
    scanf("formatSpecifier",&variable);
*/
#include<stdio.h>
int main()
{
    //int age = 26; compile time input

    int age;
    float per;
    char grade;

    printf("Enter your age\n");
    scanf("%d",&age);

    printf("Enter the 12 per\n");
    scanf("%g",&per);

    printf("Enter your 12 grade\n");
    scanf(" %c",&grade);



    printf("User age is : %d\n",age);
    printf("User per is : %g\n",per);
    printf("User grade is : %c\n",grade);

    return 0;
}