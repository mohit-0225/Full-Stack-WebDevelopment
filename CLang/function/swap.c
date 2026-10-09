#include <stdio.h>
void swap(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
int main()
{
    int a, b;
    printf("enter tha A number :>");
    scanf("%d", &a);
    printf("enter tha B number :>");
    scanf("%d", &b);

    swap(&a, &b);

    printf("tha a is:>%d",a);
    printf("\ntha b is:>%d",b);

    return 0;
}