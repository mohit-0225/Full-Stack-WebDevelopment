/*
// function declaration
<func - name>(datatype,datatype....)

// function defination
ret-type <func - name>(param1,param2....)
{
    business-logic

    return <return-val>;
}

// functio calling 
<func-nmae>(valu1,valu2...);

*/

// //NRNP
#include<stdio.h>
int main()
{
    void doSum(); //functio declaration
    doSum();
    return 0;
}
void doSum()
{
    int a,b,sum;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    
    sum = a+b;
    printf("sum : %d",sum);

}

// //NRWP
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     void doSum(int,int); //functio declaration
//     // -------
//     // printf("Enter a : ");
//     // scanf("%d",&a);
//     // printf("Enter b : ");
//     // scanf("%d",&b);
    
//     // doSum(a,b);
//     // -------
//     doSum(12,54); 
//     return 0;
// }
// void doSum(int a,int b)
// {
//     int sum;
//     sum = a+b;
//     printf("sum : %d",sum);

// }

// //WRNP
// #include<stdio.h>
// int main()
// {
//     int n;
//     int doSum(); //functio declaration
//     // ----------------
//     // n=doSum();
//     // printf("sum : %d",n);

//     // ----------------
//     printf("sum : %d",doSum());

//     return 0;
// }
// int doSum()
// {
//     int a,b,sum;
//     printf("Enter a : ");
//     scanf("%d",&a);
//     printf("Enter b : ");
//     scanf("%d",&b);
    
//     sum = a+b;
//     return sum;
// }



// //WRWP
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     int doSum(int,int); //functio declaration
//     // -------
//     printf("Enter a : ");
//     scanf("%d",&a);
//     printf("Enter b : ");
//     scanf("%d",&b);
    
//     printf("\n sum : %d",doSum(a,b));
//     // -------
//     // printf("\n sum : %d",doSum(12,54));
//     return 0;
// }
// int doSum(int a,int b)
// {
//     return (a+b);
// }



//WRWP
// #include<stdio.h>

// int doSum(int x,int y)
// {
//     return (x+y);
// }
// int main()
// {
//     int a,b;
//     printf("Enter a : ");
//     scanf("%d",&a);
//     printf("Enter b : ");
//     scanf("%d",&b);
    
//     printf("\n sum : %d",doSum(a,b));
//     return 0;
// }

