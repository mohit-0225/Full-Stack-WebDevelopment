#include <stdio.h>
#include <conio.h>
int main()
{
    int n, ans=0,total=0;
    printf("enter tha number to calculate:>");
    scanf("%d", &n);

    for (int i = 0; i < n ; i++)
    {
        ans = (ans * 10) + n;
        printf("%d", ans);
        total=total+ans;
       while (i<n-1)
       {
        printf(" + ");
        break;
       }
       
        
        
    }
    printf(" = %d", total);

    return 0;
}