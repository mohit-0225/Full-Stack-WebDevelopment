// nrnp
#include<stdio.h>
// void perten()
// {
    
//     for (int i = 0; i < 3; i++)
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             printf(" * ");
//         }
//         printf("\n");
        
//     }
    
// }
// int main()
// {
//     perten();
//     return 0;
// }

// nrwp
void perten(int n)
{
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" * ");
        }
        printf("\n");
        
    }
    
}
int main()
{
    int n=3;
    perten(n);
    return 0;
} 