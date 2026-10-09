#include <stdio.h>
#include <string.h>
int main()
{
    // char str1[100], ser;

    // printf("enter tha string:>");
    // scanf("%s", str1);
    // fflush(stdin);
    // printf("enter cerecter to be find :>");
    // scanf("%c",&ser);
    // printf("\nchar :  %c ",ser);
    // int i;
    // for (i = 0; str1[i] != '\0'; i++)
    // {
    //     if (str1[i] == ser)
    //     {
    //         printf("this cerecter is at %d location", i);
    //         break;
    //     }
    // }
    // strlen(),strcpy(),strcat(),strcmp(),strupr(),strlwr(),strchr();

    char str1[6];
    char str2[6];
    char str3[12];
    char cmp,upper,lower;

    printf("enter the string:>>");
    scanf("%s", str1);

    printf("enter the string:>>");
    scanf("%s", str2);

    printf(" first:>%s\n", str1);
    printf(" second:>%s\n", str2);

    int len = strlen(str1);
    printf("\n lenth is %d", len);

    strcpy(str1, str2);
    printf("\n coopey str1 is :>%s", str1);
    
    printf(" \n upper case:>%s",strupr(str1));
    printf("\n lower case:>%s",strlwr(str2));

    cmp = strcmp(str1, str2);
    if (cmp)
        printf("\n boyth is same");
    else
        printf("\n boyth is  not same");

    // strupr(str1);
    // strlwr(str1);

    


    return 0;
}