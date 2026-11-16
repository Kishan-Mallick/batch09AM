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
    else if(ch >= '0' && ch <= '9')
    {
        printf("char is a number\n");
    }
    else{
        printf("char is a special char\n");
    }

    return 0;
}