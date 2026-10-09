// WPWR
#include<stdio.h>
int avg(int a1,int a2,int a3,int a4,int a5)
{
  
    return ((a1+a2+a3+a4+a5)/5);
    
}
int main()
{
    int a1,a2,a3,a4,a5;

    printf("entae tha number 1:>");
    scanf("%d",&a1);
    printf("entae tha number 2:>");
    scanf("%d",&a2);
    printf("entae tha number 3:>");
    scanf("%d",&a3);
    printf("entae tha number 4:>");
    scanf("%d",&a4);
    printf("entae tha number 5:>");
    scanf("%d",&a5);

    printf("tha avrage is :>%d",avg(a1,a2,a3,a4,a5));

    return 0;

}