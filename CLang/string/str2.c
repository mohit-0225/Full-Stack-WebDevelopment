#include <stdio.h>
int main()
{
    char str[6];
    char str1[6];

    printf("enter the string:>>");
    scanf("%s", str);

    printf(" first:>%s\n", str);

    for (int i = 0; i < 6; i++)
    {
        
        // printf("\t%c",str[i]);
        str1[i]=str[i];
        
    }
    printf("\n");
    printf(" second:>%s", str1);

    return 0;
}