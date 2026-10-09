#include <stdio.h>
int main()
{
    // int x=10;

    // int y;

    // y =x;

    // int *ptrX,*ptrY;
    // ptrX = &x;
    // ptrY = &y;

    // printf("Size of ptrx %d\n\n",sizeof( ptrX));
    // printf("x : %d\n",x);
    // printf("y : %d\n",y);

    // printf("Address of x : %u\n",&x);
    // printf("Address of y : %u\n",&y);

    // printf("Address of ptrx : %u\n",&ptrX);
    // printf("value of ptrx : %d\n",ptrX);
    // printf("value of  x using ptrx : %d\n",*ptrX);

    // printf("Address of ptry : %u\n",&ptrY);
    // printf("value of ptry : %d\n",ptrY);
    // printf("value of  y using ptry : %d\n",*ptrY);

    // int arr[10]={1,2,3,4,5,6,7,8,9,10};
    // // int *ptr;
    // // ptr =arr;

    // int *ptr = arr;

    // printf("address of arr : %u \n ",&arr);
    // printf("address of arr : %u \n ",&arr[0]);
    // printf("value of a ptr : %u \n ",ptr);

    // // printf("\n value of arr using ptr : %d",*ptr+1);

    // for (int  i = 0; i < 10; i++)
    // {
    //     printf("%d\t",*(ptr+i));
    // }

    // // printf("\n size of arr : %d",sizeof(arr));
    // // printf("\n size of ptr : %d",sizeof(ptr));
    // // // printf("\n size of arr : %d",sizeof(arr));

    int x = 1, y = 2, z, *ptrx, *ptry;

    ptrx = &x;
    ptry = &y;
    z = *ptrx;
    x = *ptry;
    *ptry = z;

    printf("\n %d", *ptrx);
    printf("\n %d", *ptry);

    return 0;
}