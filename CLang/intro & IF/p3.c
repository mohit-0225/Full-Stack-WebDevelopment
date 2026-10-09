#include<stdio.h>
int main()
{
    int a;

    printf("enter tha value of A :>");
    scanf("%d",&a);

    

    if(a % 15 == 0)
    {
        printf("tha A is divaidable by 5 and 3");
    }
    else
    {
        printf("\ntha A is  not divaidable by 5 and 3");
    }
    return 0;
}