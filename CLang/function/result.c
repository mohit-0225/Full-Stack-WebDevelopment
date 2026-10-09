#include <stdio.h>
void gread(int percentage)
{
    if (percentage >= 75)
    {
        printf("\n your garde is A.Congrets!!\n");
    }
    else if (percentage >= 60)
    {
        printf("\n your garde is B. goood \n");
    }
    else if (percentage >= 45)
    {
        printf("\n your garde is C .well need some prectice\n");
    }
    else if (percentage >= 35)
    {
        printf("\n your garde is D bad you have to do hard work \n");
    }
    else
    {
        printf("\n you Are Fail beter luck next time \n");
    }
}
void per(int total)
{
    int percentage = total / 5;

    printf("\n percentage is :> %d", percentage);

    gread(percentage);
}
void mark(int s1, int s2, int s3, int s4, int s5)
{
    int total;
    total = s1 + s2 + s3 + s4 + s5;
    printf("\n mark is %d", total);

    per(total);

    
}
 
int main()
{
    int s1, s2, s3, s4, s5;

    printf("enter tha mark of sub1:>");
    scanf("%d", &s1);
    printf("enter tha mark of sub2:>");
    scanf("%d", &s2);
    printf("enter tha mark of sub3:>");
    scanf("%d", &s3);
    printf("enter tha mark of sub4:>");
    scanf("%d", &s4);
    printf("enter tha mark of sub5:>");
    scanf("%d", &s5);

    mark(s1, s2, s3, s4, s5);

    return 0;
}