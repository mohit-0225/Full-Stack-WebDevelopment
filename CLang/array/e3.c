#include <stdio.h>
int main()
{
    int a[3][3], diag = 0, ho = 0, j, i,lt,ut;
    int csum[3] = {0, 0, 0};

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

    for (int i = 0; i < 3; i++)
    {
        int rsum = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("\t %d ", a[i][j]);
            rsum += a[i][j];
            csum[j] += a[i][j];
        }
        printf("= %d", rsum);
        printf("\n");
    }
    // print of csum
    printf("\t -------------------------\n");
    for (int j = 0; j < 3; j++)

        printf("\t %d ", csum[j]);

    // sum of daignoal value
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                diag += a[i][j];
            }
            if (i < j)
            {
                ut += a[i][j];
            }
            if (i > j)
            {
                lt += a[i][j];
            }

           

        }
    }

    // // sum of uperand lower traingal
    // int ut = 0, lt = 0;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         if ((i == 0 && j == 1) || (i == 0 && j == 2) || (i == 1 && j == 2))
    //             ut += a[i][j];
    //         if ((i == 1 && j == 0) || (i == 2 && j == 0) || (i == 2 && j == 1))
    //             lt += a[i][j];
    //     }
    // }
    printf("\n");
    printf("\n\n tha sum of uper traingal value 2 3 6:>> %d", ut);
    printf("\n\n tha sum of daignonal value 1 5 9:>> %d", diag);
    printf("\n\n tha sum of lower traingal value 4 7 8:>> %d", lt);
    
  

    return 0;
}
