/*
 -> WAP to calculate sum of digit of given a number

 user input number -> 73874
   sum of digit = 29;
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);

    int sum = 0;
    int copy = num;

    while(num != 0)
    {
        int rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    printf("Sum of digit of %d is %d\n",copy,sum);

    return 0;
}
