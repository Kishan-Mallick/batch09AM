/*


*/

#include<stdio.h>
int main()
{
    int cp;
    int sp;

    printf("Enter the cost price\n");
    scanf("%d",&cp);

    printf("Enter the selling price\n");
    scanf("%d",&sp);

    if(sp > cp)
    {
        printf("User made a profit\n");
    }
    else if(sp < cp)
    {
        printf("User made a loss\n");
    }
    else
    {
        printf("User made a no profit or no Loss deal\n");
    }

    return 0;
}