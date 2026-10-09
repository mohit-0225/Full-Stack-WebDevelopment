#include<stdio.h>

int main()
{

	float s1,s2,s3,s4,s5,average,per,total;

    printf("enter the mark of subject 1:>>");
    scanf("%f",&s1);

    printf("enter the mark of subject 2:>>");
    scanf("%f",&s2);

    printf("enter the mark of subject 3:>>");
    scanf("%f",&s3);

    printf("enter the mark of subject 4:>>");
    scanf("%f",&s4);

    printf("enter the mark of subject 5:>>");
    scanf("%f",&s5);

	total= s1 + s2 + s3 + s4 + s5;

	average = total / 5.0;
	printf("tha avrage of tha 5 subject:>>%2f",average);

	per = total / 250.0 * 100.0;
	printf("\n\ntha persentage of tha student is:>>%2f",per);


	return 0;
}