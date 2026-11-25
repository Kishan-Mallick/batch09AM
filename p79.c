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

    int i = 1;
   for( ;i <= n;)
   {
        printf("Kishan Mallick\n");
        i++;
   }

   printf("After Loop\n");

    return 0;
}