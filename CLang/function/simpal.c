// npwr
// #include <stdio.h>
//     int intr()
// {
//     int p, r, n, intrust;

//     printf("enter tha amunt:>");
//     scanf("%d", &p);

//     printf("enter tha rate:>");
//     scanf("%d", &r);

//     printf("enter tha period:>");
//     scanf("%d", &n);

//     intrust = p * r * n / 100;

//     return intrust;
// }
// int main()
// {
//     printf("simpal intrust is is :>%d", intr());
//  return 0;
// }

// nrnp
// #include <stdio.h>
//     void intr()
// {
//     int p, r, n, intrust;

//     printf("enter tha amunt:>");
//     scanf("%d", &p);

//     printf("enter tha rate:>");
//     scanf("%d", &r);

//     printf("enter tha period:>");
//     scanf("%d", &n);

//     intrust = p * r * n / 100;

//     printf("intrust is :>%d", intrust);
// }
// int main()
// {
//     intr();

//     return 0;
// }

// NRWP
// #include <stdio.h>
//     void intr(int p, int r, int n)
// {
//     int intrust;

//     intrust = p * r * n / 100;
//     printf("simpal intrust is is :>%d", intrust);
// }
// int main()
// {
//     int p, r, n;

//     printf("enter tha amunt:>");
//     scanf("%d", &p);

//     printf("enter tha rate:>");
//     scanf("%d", &r);

//     printf("enter tha period:>");
//     scanf("%d", &n);

//     intr(p, r, n);

//     return 0;
// }

// wrwp
#include <stdio.h>
int intr(int p, int n, int r)
{
    int intrust = p * r * n / 100;

    // return (p * r * n / 100);
    return intrust;
}

int main()
{
    int p, r, n;

    printf("enter tha amunt:>");
    scanf("%d", &p);

    printf("enter tha rate:>");
    scanf("%d", &r);

    printf("enter tha period:>");
    scanf("%d", &n);

    printf("simpal intrust is is :>%d", intr(p, n, r));

    return 0;
}