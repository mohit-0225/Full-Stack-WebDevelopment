#include <stdio.h>
int main()
{
    char str[11];
    char str2[11];

    fflush(stdin);
    printf("enter the first string:>");
    scanf("%s",str);

    printf("enter tha second string:>>");
    scanf("%s",str2);

    fflush(stdin);
    printf("\n String 1 : %s",str);
    printf("\n String 2 : %s",str2);

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("\t %c", str[i]);
    // }
    // printf("\n");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("\t %c", str2[i]);
    // }

    return 0;
}
