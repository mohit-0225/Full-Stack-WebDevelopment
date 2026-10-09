#include <stdio.h>
int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You can vote.\n");
    }
    else
    {
        printf("You are not allow to give vote age must 18 or 18+.\n");
    }

    return 0;
}