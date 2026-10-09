#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch < 'E')
        printf("tha cerecter is before E");
    else if (ch > 'E' && ch < 'J')
        printf("tha cerecter is after E and before J");
    else if (ch > 'J' && ch < 'O')
        printf("tha cerecter is after J and before O");
    else if (ch > 'O' && ch < 'T')
        printf("tha cerecter is after O and before T");
    else if (ch > 'T' && ch < 'Y')
        printf("tha cerecter is after T and before Y");
    else if (ch > 'Y')
        printf("tha cerecter is after Y");
    else

        return 0;
}