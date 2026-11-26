/*
  -> WAP to reverse a number

  user input -> 73874
    reverse-> 47837  
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);

    int rev = 0;
    int copy = num;

    while(num != 0)
    {
        int rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }

    printf("Reverse of %d is %d\n",copy,rev);

    return 0;
}
