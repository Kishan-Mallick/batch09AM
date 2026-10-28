/*


    Ternary Operator ---> more than 2 opeards

    ? :

    syntax: -

    condition ? expression 1 : Expression 2;
*/

#include<stdio.h>
int main()
{
    int age1;
    int age2;

    printf("Enter the person 1 age\n");
    scanf("%d",&age1);

    printf("Enter the person 2 age\n");
    scanf("%d",&age2);

    age1 >= age2 ? printf("Person 1 is elder\n") : printf("Person 2 is elder\n");

    return 0;
}