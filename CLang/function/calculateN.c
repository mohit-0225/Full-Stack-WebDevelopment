#include<stdio.h>
int calculate(int n)
{
    return(n+n*n+n*n*n);
}
int main()
{
    int n;

    printf("enter tha number:>");
    scanf("%d",&n);

    printf("tha N+NN+NNN is :>%d",calculate(n));


}