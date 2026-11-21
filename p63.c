//Loops For loop
/*
    for(intialition; condition; updation)
    {
        //body of loop.
    }

    (i) value intialise
    (ii) condition mathc karna
    (iii) if true then excute body
    (iv) update value 
    (v) repeat from step 2 till the ondition is false

    WAP to print your names n times
 */

 #include<stdio.h>
 int main()
 {
    int i;
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(i = 1;i<=n;i++)
    {
        printf("Kishan Mallick\n");
    }

    return 0;
 }