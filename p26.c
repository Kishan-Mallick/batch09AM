/*  
Flow Chart :  A flow chart is a graphical repestation of the alogrithm.

Flowcharts are the visual representations of an algorithm or a process. Flowcharts use symbols/shapes like arrows, rectangles, and diamonds to properly explain the sequence of steps involved in the algorithm or process.

Control Statement :-

-> Simple if
-> if else
-> nested if else
-> ladder if else
-> switch case

simple if:

    syntax

    if(condition)
    {
        Body of if;
    }


    -> WAP to check number is greater than 50.

*/

#include<stdio.h>
int main()
{
    int num;

    printf("Enter the Number\n");
    scanf("%d",&num);

    printf("Hello World 1\n");

    if(num > 50)
    {
        printf("Number is greater than 50\n");
    }

    printf("Hello World 2\n");

    return 0;
}