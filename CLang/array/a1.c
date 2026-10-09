#include <stdio.h>
int main()
{

    int array[10], sumofeven = 0, sumofodd = 0, sumofevenpo = 0, sumofoddpo = 0, total = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("enter tha aray:>>");
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("\t%d", array[i]);
        printf("\n");
        if (array[i] % 2 == 0)
            sumofeven = sumofeven + array[i];
        else
            sumofodd = sumofodd + array[i];

        if (i % 2 == 0)
            sumofevenpo = sumofevenpo + array[i];
        else
            sumofoddpo = sumofoddpo + array[i];

        total = total + array[i];
    }
    printf("sum of even array :>>%d", sumofeven);
    printf("\n sum of odd array :>>%d", sumofodd);
    printf("\n sum of even posion array :>>%d", sumofevenpo);
    printf("\n sum of odd posion array :>>%d", sumofoddpo);
    printf("\n sum of  array :>>%d", total);

    return 0;
}