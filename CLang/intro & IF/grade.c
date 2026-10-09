#include <stdio.h>
int main()
{
    int marks;

    printf("Enter the marks: ");
    scanf("%d", &marks);

    if (marks >= 75)
    {
        printf("your garde is A.Congrets!!\n");
    }
    else if (marks >= 60)
    {
        printf("your garde is B. goood \n");
    }
    else if (marks >= 45)
    {
        printf("your garde is C .well need some prectice\n");
    }
    else if (marks >= 35)
    {
        printf("your garde is D bad you have to do hard work \n");
    }
    else
    {
        printf("you Are Fail beter luck next time \n");
    } 

    return 0;
}