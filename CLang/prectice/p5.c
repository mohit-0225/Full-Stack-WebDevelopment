#include <stdio.h>
#include <conio.h>
int main()
{

    int a, b, quotient, remainder;


    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

  
    if (b == 0)
    {
        printf("Error: Cannot divide by zero\n");
    }
    else
    {
        quotient = a / b;  // / gives integer quotient in C
        remainder = a % b; // % gives remainder

        printf("Quotient = %d\n", quotient);
        printf("Remainder = %d\n", remainder);
    }

    return 0;

    return 0;
}