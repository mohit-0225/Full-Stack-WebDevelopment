#include <stdio.h>
int main()
{
    // int n;

    // printf("enter tha size of array:>");
    // scanf("%d", &n);

    int array1[5];
    int array2[5];
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("enter array 1[%d]", i);
        scanf("%d", &array1[i]);
    }
    printf(" ------------------------------------------\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" enter array 2[%d]", i);
        scanf("%d", &array2[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        sum1 += array1[i];
        sum2 += array2[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf(" \n %d \t %d", array1[i], array2[i]);
    }

    printf(" \n %d \t %d", sum1, sum2);

    return 0;
}