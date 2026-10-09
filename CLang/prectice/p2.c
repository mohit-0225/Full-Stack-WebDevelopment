#include <stdio.h>
#include <conio.h>
int main()
{
    int x = 1, y = 2;
    int *ptrx, *ptry;
    ptrx = &x;
    ptry = &y;

    printf("\n %d", *ptrx);
    printf("\n %d", *ptry);
    printf("\n address of ptr:> %d", ptrx);
    printf("\n address of ptr:> %d", ptry);

    printf("\n  address of veri :>%d", &x);
    printf("\n  address of veri :>%d", &y);
    
    printf("\n %d", &ptrx);
    printf("\n %d", &ptry);

    return 0;
}