 /*
    -> WAP to check the number is Armstrong or not

    user input - 153 => count of digit = 3

    1 ^ 3 = 1
    5 ^ 3 = 125
    3 ^ 3 = 27

    1 + 125 + 27 sme original number 153 ye ek armstrong hai


    ----------------------------

    user inut = 1634 count of digit = 4

    1 ^ 4 = 1
    6 ^ 4 = 1296
    3 ^ 4 = 81
    4 ^ 4 = 256

    1 + 1296 + 81 + 256 == 1634


 */

 #include<stdio.h>
 #include<math.h> //header file
 int main()
 {
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    int copy = num;

    int count = 0;
    while(num != 0)
    {
        num = num / 10;
        count++;
    }

    num = copy;

    int sum = 0;
    int rem;

    while(num != 0)
    {
        rem = num % 10;
        sum = sum + pow(rem,count);
        num = num / 10;
    }

    if(sum == copy)
    {
        printf("%d is a armstrong number\n",copy);
    }
    else
    {
        printf("%d is not a armstrong number\n",copy);
    }

    return 0;

 }