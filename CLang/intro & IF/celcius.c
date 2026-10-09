#include<stdio.h>

int main()
{

	int c,f;
      
    printf("enter tha value of celceus:>>");
    scanf("%d",&c);

	f = ( c * 9 / 5) + 32;
	printf("\n if celsius is :%d then fahrenheit is:%d ",c,f);


	return 0;

}