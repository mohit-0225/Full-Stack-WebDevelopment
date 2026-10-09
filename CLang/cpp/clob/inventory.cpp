#include <iostream>
using namespace std;
class pan
{
    int inve;

public:
    pan(int x)
    {
        inve = x;
    }

    void sell(int x)
    {
        if (inve > x)
        {
            inve -= x;
        }
        else
        {
            cout<<"Product Is Out Of Stoke";
        }
    }

    void purches(int x)
    {
        inve += x;
    }

    void check()
    {
        if (inve < 10)
        {

            cout << "\n your current Inventory is "<<inve;
            cout << "\n Inventory is Low.you need to perches";
        }
        else
        {
            cout << "\n your current Inventory is "<<inve;
        }
        // return 0;
    }
};
int main()
{
    pan obj1(100);

    // // cout<<"\n Sell 101 Pens";
    // // obj1.sell(101);
    // // obj1.check();

    // cout << "\n Sell 10 Pens";
    // obj1.sell(10);
    // obj1.check();

    // cout << "\n Purches 15 Pens";
    // obj1.purches(15);
    // obj1.check();

    // cout << "\n Sell 100 Pens";
    // obj1.sell(100);
    // cout << "\n";
    // obj1.check();

    int choice, exit = 0;

    while (exit == 0)
    {

        cout << "\n make a choice";
        cout << "\n 1.for sell";
        cout << "\n 2.for purches";
        cout << "\n 3.for chek inventory\n";

        cin >> choice;

        switch (choice)
        {
        case 1:
            int s;
            cout << "\n Enter the sell product";
            cin >> s;
            obj1.sell(s);
            obj1.check();
            break;
        case 2:
            int p;
            cout << "\n Enter the purchess product";
            cin >> p;
            obj1.purches(p);
            obj1.check();

            break;
        case 3:
            obj1.check();
            break;

        default:
            cout << "your choice is invelid";
            break;
        }
        cout << "\n enter \n0 for Main Manu \n 1 for Complite\n";
        cin >> exit;
    }

    return 0;
}