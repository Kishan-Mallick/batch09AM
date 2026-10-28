/*
    WAP To check the given alphabet in in Uppercase or in Lower case.

    character Input -> alphabet -> Processing -> Uppercase or lower case

    A - Z => upppercase A => 65  Z => 90

    a - z => lowwer case a => 97 z => 122
 */

#include<stdio.h>
int main()
{
    char ch;

    printf("Enter the alphabet\n");
    scanf(" %c",&ch);

    ch >= 'A' && ch <= 'Z' ? printf("Given Aplhabet in in Uppercase\n") : printf("Given alphabet is in lower case\n");

    return 0;
}