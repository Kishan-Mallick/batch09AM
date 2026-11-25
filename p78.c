/*
    While Loop -> Entry control Loop -> Condition will be checked at the starting of the loop

    Loop -> starting ---> Ending ----> Update

    while -> Meaning of while in hindi...

    Jab

    syntax
        
        whie(condition)
        {
            //body of loop
        }
*/

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
   while(i <= n)
   {
        printf("Kishan Mallick\n"); 
        i++;
   }

   printf("After Loop\n");

    return 0;
}
