#include <iostream>
using namespace std;
void addi(int a, int b)
{
    int add;
    add = a + b;
    cout << "\n adition of A and B is" << add;
}
void subs(int a, int b)
{
    int sub;
    sub = a - b;
    cout << "\n substrection  of A and B is" << sub;
}
void mulip(int a, int b)
{
    int mul;
    mul = a * b;
    cout << "\n multiplication of A and B is" << mul;
}
void divi(int a, int b)
{
    int div;
    div = a / b;
    cout << "\n divition of A and B is" << div;
}
int main()
{
    int a, b;
    // int add, mul, div, sub;
    int choice, exit = 0;

    while (exit == 0)
    {
        cout << "enter tha value of A:>";
        cin >> a;
        cout << "\n enter tha value of B:>";
        cin >> b;

        cout << "\n make a choice";
        cout << "\n 1.for Adition";
        cout << "\n 2.for substrection ";
        cout << "\n 3.for multiplication";
        cout << "\n 4.for divition";
        // cout << "\n 5.for exit";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addi(a, b);
            break;
        case 2:
            subs(a, b);
            break;
        case 3:
            mulip(a, b);
            break;
        case 4:
            divi(a, b);
            break;

        default:
            cout << "your choice is invelid";
            break;
        }
        cout << "\n enter 0 for continue and 1 for exit";
        cin >> exit;
    }
    return 0;
}