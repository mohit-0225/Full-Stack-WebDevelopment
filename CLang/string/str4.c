#include <stdio.h>
int main()
{
    char str1[6], str2[6];

    printf("enter the string:>");
    scanf("%s", str1);

    printf("string 1 is :>> %s", str1);

    int i, j;
    for (i = 4, j = 0; j < 5; i--, j++)
    {
        str2[j] = str1[i];
    }
    str2[j] = '\0';

    printf("\n reverce string 2 is :>> %s", str2);

    return 0;
}