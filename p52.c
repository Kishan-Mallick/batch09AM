#include<stdio.h>
int main()
{
    char ch;
   
    printf("Enter the charachter \n");
    scanf(" %c",&ch);

    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("chr is vowel\n");
    }
    else
    {
        printf("char is consonent\n");
    }

    return 0;
}