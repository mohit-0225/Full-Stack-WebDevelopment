#include<stdio.h>

int main()
{
	

	int days,year,week,day,remaning_days;

    printf("enter tha days:>>");
    scanf("%d",&days);

	year = days / 365;
	printf("tha year is :>>%d\n",year);

	remaning_days= days % 365;

	week = remaning_days / 7;
	printf("tha weeks is:>> %d\n",week);

	days = remaning_days % 7;
	printf("tha days is :>>%d",days);

	return 0;
}