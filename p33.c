/*
    WAP to take the user percentage if the percentage is below 40 he is fail.

    per < 40.0 ? printf("User is fail\n") : printf("User is Pass\n");
*/

#include<stdio.h>
int main()
{
    float per;
    printf("Bhai percntage bata de\n");
    scanf("%f",&per);

    if(per < 40.0)
    {
        printf("User is fail\n");
    }
    else
    {
        printf("User is pass\n");
    }

    return 0;
}