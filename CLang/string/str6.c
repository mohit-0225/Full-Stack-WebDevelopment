#include<stdio.h>
int main()
{
    char str1[5];

    printf("enter tha string:>");
    scanf("%s",str1);
    int i;
    for ( i = 0; i < 5; i++)
    {
        str1[i]=str1[i]-32;
        // printf("%c",str1);
    }
    str1[5]='\0';

    printf("lower case string is :>%s",str1);
    
    return 0;

}