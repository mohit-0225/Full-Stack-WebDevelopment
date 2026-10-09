#include <stdio.h>
#include <conio.h>
int main()
{
    int a, ans = 0;
    printf("enter tha number:>>");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        ans += i;
    }
    printf("tha sum of number is :> %d", ans);

    return 0;
}