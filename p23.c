/*
    WAP to take a input of number and check if the number is between 50 to 100.
    
    nuberInput -> processing -> in range of 50 & 100 or not
*/

#include<stdio.h>
int main()
{
    int num;

    printf("Enter the number\n");
    scanf("%d",&num);

    num >= 50 && num <= 100 ? printf("Numb is in range of 50 to 100\n") :
    printf("Numb is in range of 50 to 100\n");

    return 0;
}