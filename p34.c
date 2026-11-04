/*
    WAP to check the given character is alphabet or not.

    input of character -> check character alphabet


    alphabet A - Z -> true
             a - z -> true

        Logical operator

        && -> Logical And -> return true if all condition true

        || -> Logical OR -> return true if any of the condition is true

        ! -> it change the result from true to false and false to true
*/

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character\n");
    scanf(" %c",&ch);


    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("Given character is a alphabet\n");
    }
    else
    {
        printf("Given character is not a alphabet\n");
    }

    return 0;
}