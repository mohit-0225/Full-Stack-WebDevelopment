// #include <iostream>
// using namespace std;
// class myclass
// {

//     int a, b;

// public:
//     void satab(int i, int j) 
//     {
//         a = i;
//         b = j;
//     }
//     friend int sum(myclass x)
//     {
//         return x.a + x.b;
//     } 
// };
// int main()
// {
//     myclass n;
//     n.satab(3, 4);
//     cout << sum(n);
//     return 0;
// }

#include <iostream>
using namespace std;
class myclass
{

    int a, b;

public:
    inline void  satab(int i, int j); //inline function
    friend int sum(myclass x); // friend function
};
void myclass::satab(int i, int j)
{
    a = i;
    b = j;
}
int sum(myclass x)
{
    return x.a + x.b;
}
int main()
{
    myclass n;
    n.satab(3, 4);
    cout << sum(n);
    return 0;
}
