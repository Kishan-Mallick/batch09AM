/*
    Function	Description
ceil(x)	-> Returns the value of x rounded up to its nearest integer
floor(x) ->	Returns the value of x rounded down to its nearest integer
fmax(x, y) ->	Returns the highest value of a floating x and y
fmin(x, y) ->	Returns the lowest value of a floating x and y
fmod(x, y) ->	Returns the floating point remainder of x/y
pow(x, y) ->	Returns the value of x to the power of y
remainder(x, y)	Return the remainder of x/y rounded to the nearest integer
rint(x)	Returns x rounded to a nearby integer
round(x)	Returns x rounded to the nearest integer
sqrt(x)	Returns the square root of x

// question = 40
*/

#include<stdio.h>
#include<math.h>
int main()
{
    float num;

    printf("Enter the number\n");
    scanf("%f",&num);

    float ans = round(num);

    printf("%f\n",ans);
    return 0;

}