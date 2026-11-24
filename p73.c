/*
    WAP to print your name n times.

*/

#include<stdio.h>
int main()
{

    int n;
    printf("Enter the nvalue of n\n");
    scanf("%d",&n);

    printf("Before Loop\n");

   for(int i = 1;i <= n;i++)
   {
        printf("Kishan Mallick\n");
   }

   printf("After Loop\n");

    return 0;
}