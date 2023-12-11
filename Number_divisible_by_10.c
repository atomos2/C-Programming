#include <stdio.h>
int main()
{
    // declare the variable
    int a, b;
    printf("Enter the number:");
    scanf("%d", &a);
     
    //To see whether the number is divisible by 10
    if (a%10==0)
    {
        printf("The number is divisble by 10\n");

    }
    else {
        printf("The number is not divisible by 10\n");
    }
    //Finding out the next number divisible by 10
    b= a+(10-a%10);
    printf("The next number divisble by 10 is %d\n", b);
    return 0;
}