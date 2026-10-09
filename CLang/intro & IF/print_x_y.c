#include <stdio.h>
int main()
{
  int x, y;

  printf("Enter value for x: ");
  scanf("%d", &x);

  printf("Enter value for y: ");
  scanf("%d", &y);

  if (x < 2000 || x > 3000)
  {
    printf("value x: %d.\n", x);
  }
  if (y > 100 || y < 500)
  {
    printf("value y: %d ", y);
  }

  return 0;
}