/*
    Assignment Operators.

    =
    +=
        eg - a= 10;
            a+=20; --- a = a + 20;

    -=
    *=
    /=
    %=
*/

#include<stdio.h>
int main()
{

    int a = 25;
    int b = 30;

    a += b;

    printf("Value of a : %d\n",a);
    printf("Value of b : %d\n",b);

    return 0;

}