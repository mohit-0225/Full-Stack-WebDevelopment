#include <stdio.h>
#include <math.h>
float intr(float p, float r, float n)
{
    float intrust;
    intrust = p*pow((1 + r / 100), n);

    return intrust;
}
int main()
{
    // int a=2,b;
    // b=pow(a,2);
    

    float p, r, n;

    printf("enter tha value p:>");
    scanf("%f", &p);
    printf("enter tha value r:>");
    scanf("%f", &r);
    printf("enter tha value n:>");
    scanf("%f", &n);

    printf("tha compund intrust:>%.2f",intr(p, r, n));
}
