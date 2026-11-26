/*
     -> WAP to count the digit in the given number

     user number Input -> 4454541
     count of digit = 7
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);

    int count = 0;
    int copy = num;

    while(num != 0)
    {
        num = num / 10;
        count++;
    }

    printf("Count of digit of %d is %d\n",copy,count);

    return 0;
}

