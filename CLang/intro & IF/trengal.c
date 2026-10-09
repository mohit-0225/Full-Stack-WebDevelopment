#include<stdio.h>

int main()
{
	
	float a,b,c;

    printf("enter tha engel A:>>");
    scanf("%f",&a);

    printf("enter tha engel A:>>");
    scanf("%f",&b);
    
	c = 180.0 - (a +  b);
	printf("tha missing angel c is :>>%2f",c);

    return 0;
}