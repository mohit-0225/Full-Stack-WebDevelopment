#include <iostream>
using namespace std;
void compaire(int a, int b, int c)
{

    if (a > b && a > c)
    {
        cout << "tha a is biger";
    }
    else
    {
        if (b > c)
        {
            cout << "tha b is biger";
        }
        else
        {
            cout << "tha c is biger";
        }
    }
}
int main()
{
    int a, b, c;

    cout << "enter tha A";
    cin >> a;
    cout << "enter tha A";
    cin >> b;
    cout << "enter tha A";
    cin >> c;

    compaire(a, b, c);
    return 0;
}