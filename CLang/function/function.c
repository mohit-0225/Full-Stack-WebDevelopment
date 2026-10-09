#include<stdio.h>

int func2(int y)
{
    printf("\n entry func 2");
    printf("\n exit func 2");
    return y*y*y;
}
int func1(int x)
{
    printf("\n entry func 1");
    printf("\n func1 ret-func2 : %d",func2(x));
    printf("\n exit func 1");
    return x*x;
}
int main()
{
    printf("\n entry main");
    printf("\n main - func1 : %d",func1(5));
    printf("\n entry func 1");
    printf("\n exit main");
    return 0;
}