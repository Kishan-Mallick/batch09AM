#include<stdio.h>
int main()
{
    int num;
   
    printf("Enter the number \n");
    scanf("%d",&num);

    num % 5 == 0 && num % 11 == 0 ? printf("Num is divisble by 5 & 11\n") : printf("Num is not divisble by 5 & 11\n");
    

    return 0;
}