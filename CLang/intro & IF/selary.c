#include <stdio.h>
int main()
{

    int a, salary;

    printf("enter your salary ");
    scanf("%d", &a);

    if (a < 5000)
    {
        salary = a + (0.08 * a) + (0.20 * a);
    }
    else if (a > 5000 && a < 10000)
    {
        salary = a + (0.12 * a) + (0.30 * a);
    }
    else if (a > 10000 && a < 15000)
    {
        salary = a + (0.15 * a) + (0.40 * a);
    }
    else
    {
        salary = a + (0.20 * a) + (0.50 * a);
    }
    printf(" total salary is:%d", salary);

    return 0;
}