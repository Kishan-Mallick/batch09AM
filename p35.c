/*

     C is a case sensative
    WAp to to take input of the character and check that it is vowel or not.

    Vowels -> A E I O U

    
*/

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character\n");
    scanf(" %c",&ch);

    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Given alphabet is a vowels\n");
    }
    else
    {
        printf("Given character is not a vowel\n");
    }

    return 0;
}