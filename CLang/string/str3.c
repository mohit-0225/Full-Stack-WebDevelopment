#include <stdio.h>
int main()
{
    char str1[6];
    char str2[6];
    char str3[12];

    printf("enter the string:>>");
    scanf("%s", str1);

    printf("enter the string:>>");
    scanf("%s", str2);

    printf(" first:>%s\n", str1);
    printf(" second:>%s\n", str2);

 
    int i,j;
    for ( i = 0,j=5; i < 5; i++,j++)
    {

        str3[i] = str1[i]; 
        str3[j] = str2[i]; 
        printf("\t %c",str3[j]);

        
    }
    str3[j]='\0';

   
    

    
    printf("\n");
    printf(" COMBAIN:>%s\n", str3);

    return 0;
}