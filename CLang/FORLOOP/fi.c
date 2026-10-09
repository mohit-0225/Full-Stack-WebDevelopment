#include<stdio.h>
int main()
{
    // int amt=20,ch=0,rem;
    // ch =amt;
    // rem+=amt/4;
    // while(rem>4)
    //     rem+=amt/4;

    // printf("\n %d",ch);

    // iterative statement / loop
    // for(exp1 ; exp2 ; exp3)
    // {
            // iterative statement
    // }

    /*
    exp1 : init/start       i=1         exec only once      start  from here
    exp2 : condition/stop   i<=10       exec every time     before enter 
    exp3 : inc-dec/step     i++         exec every time     before exit
    
    */


    // int i;
    // for ( i = 1; i <= 10; i++)
    // {
    //     printf("\t%d",i);
    // }

    /*
    i       i<=10                   i++
    1       1<=10   T   print 1     2
            2<=10   T   print 2     3         
            3<=10   T   print 3     4         
            3<=10   T   print 4     5         
            5<=10   T   print 5     6         
            6<=10   T   print 6     7         
            7<=10   T   print 7     8         
            8<=10   T   print 8     9         
            9<=10   T   print 9     10 
            
            10<=10  T   print 10    11
            11<=10  F   X-exit 


    */


    int i;
    for ( i = 10; i > -10; i--)
    {
        printf("\t%d",i);
    }
    

    return 0;
}