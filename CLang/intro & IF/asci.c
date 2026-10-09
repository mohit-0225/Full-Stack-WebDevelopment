#include<stdio.h>
int main()
{
     char A ;

     printf("Enter a character: ");
        scanf("%c", &A);

        if(A>96 && A<123)
        {
            printf("tha cerecter is %c %d \n", A-32,A-32);
        }
        else 
        {
            printf("tha carecter is %c %d", A+32,A+32);
        }
       
    return 0;
}