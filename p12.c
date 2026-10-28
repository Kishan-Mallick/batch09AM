#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 10;

    printf("%d > %d : %d\n",a,b,a>b);
    printf("%d >= %d : %d\n",a,d,a>=d);
    printf("%d > %d : %d\n",a,d,a>d);
    printf("%d == %d : %d\n",d,b,d==b);
    printf("%d == %d : %d\n",d,a,d==a);
    printf("%d != %d : %d\n",d,c,d!=c);
    printf("%d != %d : %d\n",d,a,d!=a);

    return 0;
}