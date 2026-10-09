#include <stdio.h>
#include <conio.h>
void avg(int a, int b, int c, int d)
{
    int x = (a + b + c + d) / 4;
    printf("%d", x);
}
int main()
{
    int a, b, c, d;
    // printf("tha avrage of 4 number is :>",avg(10, 20, 30, 40));

    avg(1, 2, 3, 4);
    return 0;
}