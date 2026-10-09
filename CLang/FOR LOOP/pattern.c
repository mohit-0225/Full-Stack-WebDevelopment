#include <stdio.h>
int main()
{
    int i, j;

    // for(i=1;i<=3;i++)// row
    // {
    //     for(j=1;j<=7;j++)// col
    //     {
    //         printf(" *");
    //     }
    //     printf("\n");
    // }

    // for(i=3;i>=1;i--)// row 3
    // {
    //     for(j=7;j>=1;j--)// col 7
    //     {
    //         printf(" *");
    //     }
    //     printf("\n");
    // }

    // for(i=1;i<=3;i++)// row 3
    // {
    //     for(j=7;j>=1;j--)// col 7
    //     {
    //         printf(" *");
    //     }
    //     printf("\n");
    // }

    // for(i=3;i>=1;i--)// row 3
    // {
    //     for(j=1;j<=7;j++)// col 7
    //     {
    //         printf(" *");
    //     }
    //     printf("\n");
    // }

    //    ---
    // for(i=5;i>=1;i--)// row 5
    // {
    //     for(j=5;j>=1;j--)// col 5
    //     {
    //         printf("%d ",i);
    //     }
    //     printf("\n");
    // }

    // for(i=5;i>=1;i--)// row 5
    // {
    //     for(j=5;j>=1;j--)// col 5
    //     {
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }

    // for(i=1;i<=5;i++)// row 5
    // {
    //     for(j=1;j<=5;j++)// col 5
    //     {
    //         printf("%d ",i);
    //     }
    //     printf("\n");
    // }

    // for(i=1;i<=5;i++)// row 5
    // {
    //     for(j=1;j<=5;j++)// col 5
    //     {
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }

    // for(i=5;i>=1;i--)// row 5
    // {
    //     for(j=1;j<=5;j++)// col 5
    //     {
    //         printf("%d ",i);
    //     }
    //     printf("\n");
    // }

    // for(i=5;i>=1;i--)// row 5
    // {
    //     for(j=1;j<=5;j++)// col 5
    //     {
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }

    // for(i=1;i<=5;i++)// row 5
    // {
    //     for(j=5;j>=1;j--)// col 5
    //     {
    //         printf("%d ",i);
    //     }
    //     printf("\n");
    // }

    // for(i=1;i<=5;i++)// row 5
    // {
    //     for(j=5;j>=1;j--)// col 5
    //     {
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }
    //--------------------------------------------------------------------------------------------
    // A B C D F

    // 1.1

    // for(i=65;i<=69;i++)// row 5
    // {
    //     for(j=65;j<=69;j++)// col 5
    //     {
    //         if(i%2==1)
    //         printf("%c ",j);
    //         else
    //         printf("%c ",j+32);

    //     }
    //     printf("\n");
    // }

    // 1.2

    // for(i=69;i>=65;i--)// row 5
    // {
    //     for(j=65;j<=69;j++)// col 5
    //     {
    //         if(i%2==1)
    //         printf("%c ",j);
    //         else
    //         printf("%c ",j+32);

    //     }
    //     printf("\n");
    // }

    // 2.1

    // for(i=65;i<=69;i++)// row 5
    // {
    //     for(j=65;j<=69;j++)// col 5
    //     {
    //         if(j%2==1)
    //         printf("%c ",i);
    //         else
    //          printf("%c ",i+32);

    //     }
    //     printf("\n");
    // }

    // 2.2

    // for(i=65;i<=69;i++)// row 5
    // {
    //     for(j=69;j>=65;j--)// col 5
    //     {
    //         if(j%2==1)
    //         printf("%c ",i);
    //         else
    //          printf("%c ",i+32);

    //     }
    //     printf("\n");
    // }

    // 3.1

    // for(i=90;i>=85;i--)// row 5
    // {
    //     for(j=90;j>=85;j--)// col 5
    //     {
    //         if(i%2==1)
    //         printf("%c ",j);
    //         else
    //         printf("%c ",j+32);

    //     }
    //     printf("\n");
    // }

    // 3.2
    //   for(i=86;i<=90;i++)// row 5
    //  {
    //      for(j=90;j>=86;j--)// col 5
    //      {
    //          if(i%2==0)
    //          printf("%c ",j);
    //          else
    //          printf("%c ",j+32);

    //     }
    //     printf("\n");
    // }

    // 4.1

    // for(i=90;i>=85;i--)// row 5
    //     {
    //         for(j=90;j>=85;j--)// col 5
    //         {
    //             if(j%2==0)
    //             printf("%c ",i);
    //             else
    //              printf("%c ",i+32);

    //         }
    //         printf("\n");
    //     }

    // 4.2

    // for(i=90;i>=86;i--)// row 5
    //     {
    //         for(j=1;j<=5;j++)// col 5
    //         {
    //             if(j%2==1)
    //             printf("%c ",i);
    //             else
    //              printf("%c ",i+32);

    //         }
    //         printf("\n");
    //     }

    // for(i=1;i<=5;i++)// row
    // {
    //     for(j=1;j<=5;j++)// col
    //     {
    //         printf("%d",i*2);
    //     }
    //     printf("\n");
    // }

    for (i = 1; i <= 10; i++) // row
    {
        for (j = 1; j <= 10; j++) // col
        {
            if (i % 2 == 1)
                printf("\t %d", i);
        }
        printf("\n");
    }

    return 0;
}

/*
* * *
* * *
* * *
* * *
* * *


i   i<=5        j     j<=3                  j++     i++
1   1<=5    T   1     1<=3      T   print   2
                      2<=3      T   print   3
                      3<=3      T   print   4
                      4<=3      F   XXXX
                                                    2
    2<=5    T   1     1<=3      T   print   2
                      2<=3      T   print   3
                      3<=3      T   print   4
                      4<=3      F   XXXX            3

    3<=5    T   1     1<=3      T   print   2
                      2<=3      T   print   3
                      3<=3      T   print   4
                      4<=3      F   XXXX            4

    4<=5    T   1     1<=3      T   print   2
                      2<=3      T   print   3
                      3<=3      T   print   4
                      4<=3      F   XXXX
                                                    5
    5<=5    T   1     1<=3      T   print   2
                      2<=3      T   print   3
                      3<=3      T   print   4
                      4<=3      F   XXXX            6
    6<=5    False     XXX-




*/