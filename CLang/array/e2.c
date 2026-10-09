#include <stdio.h>
int main()
{

    int a[3][3], b[3][3];

    // insert array1
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter tha array 1:>>");
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }


    // insert array2
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter tha array 2:>>");
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    // print of all array horizontaly
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\t %d ", a[i][j]);
        }
        for (int j = 0; j < 3; j++)
        {
            printf("\t %d ", b[i][j]);
        }

        for (int j = 0; j < 3; j++)
        {
            printf("\t %d ", a[i][j]+b[i][j]);
        }
        printf("\n");
    }

    // printf("\n");

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("\t %d", b[i][j]);

    //     }
    //     printf("\n");
    // }

    return 0;
}