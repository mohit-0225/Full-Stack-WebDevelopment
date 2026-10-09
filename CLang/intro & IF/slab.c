#include <stdio.h>
int main()
{
    int a, ans;

    printf("enter tha one value A:");
    scanf("%d", &a);

    if (a < 2500)
    {
        ans = (2500 - 0) * 0.0;
    }
    else if (a > 2500 && a < 5000)
    {
        // w=(2500-0)*0.0;
        // x=(5000-a)*0.10;
        // ans=w+x;

        ans = (5000 - a) * 0.10;
    }
    else if (a > 5000 && a < 10000)
    {
        // w=(2500-0)*0.0;
        // x=(5000-2500)*0.10;
        // y=(a-5000)*0.20;
        // ans=w+x+y;
        ans = 250 + (a - 5000) * 0.20;
    }
    else
    {
        // w=(2500-0)*0.0;
        // x=(5000-2500)*0.10;
        // y=(10000-5000)*0.20;
        // z=(a-10000)*0.30;
        // ans=w+x+y+z;
        ans = 1250 + (a - 10000) * 0.30;
    }
    printf("ans is:%d", ans);

    return 0;
}