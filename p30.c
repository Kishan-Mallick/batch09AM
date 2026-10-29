/* WAp to check the number is postive number or negative number

    user num input -> conditon

    condition ? printf : printf;

    num >= 0 ? printf("") : printf("");
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);

    if(num >= 0)
    {
        printf("Number is positive\n");
    }
    else
    {
        printf("Number is negative\n");
    }

    return 0;
}