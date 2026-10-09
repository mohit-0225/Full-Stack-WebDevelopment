#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], str1[50];

    printf("enter the string:>");
    scanf("%s", str);

    strcpy(str1, str);
    strrev(str);

    if (strcmp(str1, str))
        printf("not pelendrom");
    else
        printf("pelendrom");

    return 0;
}