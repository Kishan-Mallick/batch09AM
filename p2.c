/*
    Date
    Printf()

    Format Specifier
        "%d" - integer

    Escape sequence
*/

#include<stdio.h>
int main()
{
    int age = 26; 
    float per = 74.8;
    char grade = 'A';

    printf("My age is : %d\n",age);
    printf("My percentage is : %g\n",per);
    printf("My Grade is : %c\n",grade);

    return 0;
}