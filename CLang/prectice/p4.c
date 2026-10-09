#include <stdio.h>
#include <conio.h>
int main()
{
    int a;

    printf("enter tha number :>>");
    scanf("%d", &a);

    for (int i = 2; i <= a; i++)
    {
        if (a % i == 0)
        {
            printf("the smallest divider of %d is %d", a, i);
            break;
        }
    }

    return 0;
}