#include <stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    int ver;

    printf("enter tha string:>");
    scanf("%s", str1);
    printf("enter tha string:>");
    scanf("%s", str2);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == str2[i])
        {
            ver = 1;
        }
        else
        {
            ver = 0;
            break;
        }
    }

    if (ver == 1)
        printf("both is same");
    else
        printf("both is  not same");

    return 0;
}