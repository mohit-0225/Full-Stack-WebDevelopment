#include<stdio.h>

int main()
{
	float cm,m,km;

    printf("enter tha cm value:>>");
    scanf("%f",&cm);

	// hear cm = 10 mm
	// 1 miter= 100 cm
	// 1 km = 1000 miter

	m=cm/100;
	km=m/1000;

	 printf("miter is :>>%2f",m);
	 printf("\nmiter is :>>%2f",km);

	return 0;
}