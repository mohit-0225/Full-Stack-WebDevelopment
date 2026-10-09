#include<stdio.h>
#include<conio.h>
int main()
{

	float r,pi=3.14,d,c,a;

    printf("enter tha R:>>");
    scanf("%f",&r);

	d=2.0 * r;
	printf("tha diameter of circle is :>> %2f",d);

	c=2.0 * pi * r;
	printf("\ntha circumference of circle is :>> %2f",c);

	a=pi * r * r;
	printf("\ntha area of circlr is :>>%2f",a);


	return 0;
}