//npwr
// #include<stdio.h>
// int sqver()
// {
//     int a,q;
//     printf("enter a value:>");
//     scanf("%d",&a);
//     q=a*a;
//     return(q);
// }
// int qube()
// {
//     int a,s;
//     printf("enter a value:>");
//     scanf("%d",&a);
//     s=a*a*a;
//     return(s);
// }
// int main()
// {
//     printf("tha sqver is %d\n",sqver());
//     printf("tha qube is%d\n",qube());
    
// }

// WRWP
#include<stdio.h>
int squre(int a)
{
    return(a*a);
}
int cube(int a)
{
    return(a*a*a);
}
int main()
{
    int a;
    printf("enter a value:>");
    scanf("%d",&a);

    printf("tha squre is :>>%d\n",squre(a));
    printf("tha cube is :>>%d\n",cube(a));

    return 0;


}