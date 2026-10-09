#include <stdio.h>
int main()
{
    char A;

    printf("Enter a character: ");
    scanf("%c", &A);

    if (A == 'a'||A =='e'||A == 'i'||A == 'o'||A == 'u')
        printf("tha entered cherecter is vovel");
    else
    {
        printf("tha cerecter is consonant");
    }

    return 0;
}