#include<stdio.h>
int main()
{
    char ch;
   
    printf("Enter the charachter \n");
    scanf(" %c",&ch);

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("chr is albhabet\n");
    }
    else
    {
        printf("char is not a alphabet\n");
    }

    return 0;
}