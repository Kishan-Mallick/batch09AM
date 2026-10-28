//Logical AND

#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 10;

    int ans = c<d && !(!(b<c) && (a==d) && !(d>c));

    printf("Value of ans : %d\n",ans);

    return 0;
}