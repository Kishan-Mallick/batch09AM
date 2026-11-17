/*
    Amount -> 618
    500 - 1 Note
    100 - 1 Note 
    10 - 1 Note
    5 -> 1 Note
    2 -> 1 Note
    1 -> 1 Note

    415


*/

#include<stdio.h>
int main()
{
    int amt;
    int note = 0;
    printf("Enter the amount\n");
    scanf("%d",&amt);

    if(amt > 500)
    {
       note =  amt/500;
       amt = amt - (note * 500);
       printf("Total 500 Note : %d\n",note);
    }
    

    if(amt > 200)
    {
       note =  amt/200;
       amt = amt - (note * 200);
       printf("Total 200 Note : %d\n",note);
    }

    return 0;
}