// nrnp
// #include<stdio.h>
// void mul()
// {
//     int a,b,mul;

//     printf("enter tha a:>");
//     scanf("%d",&a);

//     printf("enter tha a:>");
//     scanf("%d",&b);
//     mul=a*b;

//     printf("mulition id:>%d",mul);

// }
// int main()
// {
//     mul();

//     return 0;
// }

// NRWP
//  #include <stdio.h>
//  void domul(int a, int b)
//  {
//      int mul;

//     mul = a *b;
//     printf("tha mul is :>%d", mul);
// }
// int main()
// {
//     int a, b, mul;
//     printf("enter tha a:>>");
//     scanf("%d", &a);
//     printf("enter tha b:>>");
//     scanf("%d", &b);

//     domul(a,b);

//     return 0;
// }

// wrnp
// #include <stdio.h>
// int domul()
// {
//     int a, b, mul;

//     printf("enter tha a:>>");
//     scanf("%d", &a);
//     printf("enter tha b:>>");
//     scanf("%d", &b);

//     mul=a*b;

//     return mul;
// }
// int main()
// {
//     // domul();
//     printf("mul:>%d",domul());
//     return 0;
// }

// WRWP
#include<stdio.h>
int domul(int a,int b)
{

    int mul=a*b;
    return mul;
}

int main()
{
    int a,b;
    printf("enter tha a:>>");
    scanf("%d", &a);
    printf("enter tha b:>>");
    scanf("%d", &b);

    printf("mul is :>%d",domul(a,b));
    return 0;
}
