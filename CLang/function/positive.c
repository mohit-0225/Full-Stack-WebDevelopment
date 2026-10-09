#include <stdio.h>
void chek(int number)
{
    if (number > 0)
        printf("tha number is positive");
    else
        printf("tha number is nagative");
}
int main()
{
    int number;

    printf("enter tha number :>");
    scanf("%d", &number);

    chek(number);
    return 0;
}