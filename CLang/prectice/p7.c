#include <stdio.h>
int main()
{
    int rev = 0, rem, number;
    printf("\nenter tha number to reverce:>");
    scanf("%d", &number);

    while (number != 0)
    {
        rem = number % 10;
        rev = (rev * 10) + rem;
        number = number / 10;
    }
    printf("tha reverce number id :> %d", rev);
}