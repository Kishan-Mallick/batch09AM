/*
    -> WAP to check number is pallindrome or not

    pallindrome _. user num 123 => 321 ye ek pallindore nahi hai


    user num -> 1221 => 1221 => pallindrome num

    madam arora mom dad naman
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

    if(rev == copy)
    {
        printf("Given number is a pallindorme number\n");
    }
    else
    {
        printf("Given number is not a pallindorme number\n");
    }
    
    return 0;
}
