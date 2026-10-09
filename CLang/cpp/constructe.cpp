#include <iostream>
using namespace std;
class arith
{
    int a, b;

public:
    arith()
    {
        a = 10;
        b = 20;
        cout << "\n tha value of A is :>" << a;
    }
    // ~arith()
    // {
    //     cout<<"\n destructer is called"<<a + b;
    // }
    arith(int x)
    {
        a = x;
        b = 20;
        cout << "\n tha value of b is :>" << b;
    }
    arith(int x, int y)
    {
        a = x;
        b = y;
        cout << "\n tha value of A is :>" << a;
        cout << "\n tha value of B is :>" << b;
        // cout<<"\n sum  of A & B is :>"<<a+b;
    }
    void sum()
    {
        cout << "\n sum  of A & B is :>" << a + b;
    }
};
int main()
{
    arith obj, obj2(20), obj3(30, 40), obj4;
    obj4.sum();
    return 0;
}