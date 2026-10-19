#include<stdio.h>
int main()
{
    int  a;
    int  b;
    int  ans;

    printf("enter the num a\n" );
    scanf("%d",&a);
    printf("enter the num b\n");
    scanf("%d",&b);

    ans = a%b;

    printf("Reminder of a and b : %d\n",ans);
    return 0;
    
}