#include <stdio.h>
int main()
{
   int a, b, c;

   printf("enter tha value of A:>");
   scanf("%d", &a);

   printf("enter tha value of b:>");
   scanf("%d", &b);

   printf("enter tha value of c:>");
   scanf("%d", &c);

   if (a > b && a > c)
   {
      printf("A is bigest");
   }
   else
   {
      if (b > c)
      {
         printf("B is bigest");
      }
      else
      {
         printf("tha c is bigest");
      }
   }

   return 0;
}