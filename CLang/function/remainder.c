#include <stdio.h>

void Remainder(int a, int b)
{
    printf("The Remainder is: %d\n", a % b);
}

void Quotient(int a, int b)
{
    printf("The Quotient is: %d\n", a / b);
    Remainder(a, b);
}

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    Quotient(a, b);
    

    return 0;
}
