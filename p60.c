/*
    Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:

        Percentage >= 90% : Grade A
        Percentage >= 80% : Grade B
        Percentage >= 70% : Grade C
        Percentage >= 60% : Grade D
        Percentage >= 40% : Grade E
        Percentage < 40% : Grade F

*/

#include<stdio.h>
int main()
{
    int math;
    int phy;
    int che;
    int bio;
    int eng;
    float per;


    printf("Enter the maths marks\n");
    scanf("%d",&math);

    printf("Enter the phy marks\n");
    scanf("%d",&phy);

    printf("Enter the chem marks\n");
    scanf("%d",&che);

    printf("Enter the bio marks\n");
    scanf("%d",&bio);

    printf("Enter the english marks\n");
    scanf("%d",&eng);

    per = (math+phy+che+bio+eng)/5;

    if(per >= 90.0)
    {
        printf("Grade A\n");
    }
    else if(per >= 80.0 && per < 90)
    {
        printf("Grade B\n");
    }
    else if(per >= 70.0 && per < 80)
    {
        printf("Grade C\n");
    }
    else if(per >= 60.0 && per < 70)
    {
        printf("Grade D\n");
    }
    else if(per >= 40.0 && per < 60)
    {
        printf("Grade E\n");
    }
    else
    {
        printf("Fail\n");
    }


    return 0;
}