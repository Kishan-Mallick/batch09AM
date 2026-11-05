/*
    WAP to take the input of shopping price and the gender if the shopping is above 10000 and the user is female she  can avail 15% discount. but if the user is male he can avail 12% of discount.
    If the shopping price is below 10000 the the female user can avail 10% discount and male user can avail 8% discount.


    Requirement
    -> shopping price - int
    -> gen if she is female press "y" char...


    discunt% => discount%/100 * shopping price

*/

#include<stdio.h>
int main()
{
    int sp;
    char ch;
    int dis;

    printf("Enter the shopping price\n");
    scanf("%d",&sp);

    printf("Enter Y if you are a female\n");
    scanf(" %c",&ch);


    if(sp >= 10000)
    {
        if(ch == 'Y' || ch == 'y')
        {
            //15% discount
            dis = 0.15 * sp;
            printf("Discount availed as your sp is above 10000 and you are female : %d\n",dis);
        }
        else
        {
            //12% discount
            dis = 0.12 * sp;
            printf("Discount availed as your sp is above 10000 and you are not a female : %d\n",dis);
        }
    }
    else
    {
         if(ch == 'Y' || ch == 'y')
        {
            //15% discount
            dis = 0.10 * sp;
            printf("Discount availed as your sp is below 10000 and you are female : %d\n",dis);
        }
        else
        {
            //12% discount
            dis = 0.08 * sp;
            printf("Discount availed as your sp is below 10000 and you are not a female : %d\n",dis);
        }
    }

    return 0;
}