#include <stdio.h>
int main()
{
    float units, total = 50.0;

    printf("Enter the number of units consumed: ");
    scanf("%f", &units);

    if (units <= 100)
    {
        total = units * 0.60 + 50;
    }
    else if (units <= 300)
    {
        total = 60 + (units - 100) * 0.80 + 50;
    }
    else if (units > 300)
    {
        total = 220 + (units - 300) * 0.90 + 50;
    }
    else
    {
        printf("your not using tha electricity min charges is :%f \n", total);
    }

    if (total > 300)
    {
        total = total * 1.15;
    }
        printf("your total electricity bill is : %.2f \n", total);
}