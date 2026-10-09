#include<stdio.h>

int reverse(int number)
{
    int rev = 0;

    while (number != 0)
    {
        rev = rev * 10 + (number % 10);
        number = number / 10;
    }

    return rev;
}
int main()
{
    int number;
    printf("enter tha number :>>");
    scanf("%d",&number);

    printf("tha number is %d and reverse is :> %d",number,reverse(number));
    return 0;
}