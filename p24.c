/*
    C is a case sensetive language

    WAP to check that given alphabet is vowel or not

    character -> Alphabet Input -> process -> vowels

    vowels -> A, E, I, O, U
*/

#include<stdio.h>
int main()
{
    char ch;

    printf("Enter the alphabet\n");
    scanf(" %c",&ch);

    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ? printf("Alphbet is a vowel\n") : printf("Alphabet is not a vowel\n");

    return 0;
}