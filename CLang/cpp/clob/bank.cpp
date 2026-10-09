// #include <iostream>
// using namespace std;
// class saving
// {

//     int balance;

// public:
//     saving(int x)
//     {
//         balance = x;
//         cout << "\n Your account balance is :>" << balance;
//     }
//     void deposite(int x)
//     {
//         balance += x;
//     }
//     void withdrow(int x)
//     {
//         if (balance > x)
//             balance -= x;
//         else
//             cout << "\n in suffficient balance";
//     }
//     int chekbalance()
//     {
//         return balance;
//     }
// };
// int main()
// {
//     saving obj1(1000);
//     cout << "\n deposite 100";
//     obj1.deposite(100);
//     cout << "\n your account balance is :" << obj1.chekbalance();

//     cout << "\n withdrow 10";
//     obj1.withdrow(10);
//     cout << "\n your account balance is :" << obj1.chekbalance();

//     return 0;
// }

// using swich case

// #include <iostream>
// using namespace std;
// class saving
// {

//     int balance;

// public:
//     saving(int x)
//     {
//         balance = x;
//         // cout << "\n Your account balance is :>" << balance;
//     }
//     void deposite(int x)
//     {
//         balance += x;
//     }
//     void withdrow(int x)
//     {
//         if (balance > x)
//             balance -= x;
//         else
//             cout << "\n in suffficient balance";
//     }
//     int chekbalance()
//     {
//         return balance;
//     }
// };

// int main()
// {

//     saving obj1(1000);
//     int choice, exit = 0;

//     while (exit == 0)
//     {

//         cout << "\n make a choice";
//         cout << "\n 1.for case withdrow";
//         cout << "\n 2.for case deposite ";
//         cout << "\n 3.for chek belence\n";

//         cin >> choice;

//         switch (choice)
//         {
//         case 1:
//             int w;
//             cout << "\n Enter the Amount to Withdrow";
//             cin >> w;
//             obj1.withdrow(w);
//             break;
//         case 2:
//             int d;
//             cout << "\n Enter the Amount deposite";
//             cin >> d;
//             obj1.deposite(d);

//             break;
//         case 3:
//             cout << "\n your account balance is :" << obj1.chekbalance();
//             break;

//         default:
//             cout << "your choice is invelid";
//             break;
//         }
//         cout << "\n enter \n0 for Main Manu \n 1 for Complite\n";
//         cin >> exit;
//     }
//     return 0;
// }

// static veriable use

#include <iostream>
using namespace std;
static int bankbalance=3000;
class bank
{

public:
    int balance = 0;
    // static int bankbalance;

    bank(int x)

    {
        balance = x;
        
        cout << "\n Your account balance is :>" << balance;
    }
    ~bank()
    {
        cout<<"\n destructer is called "<< balance;
    }
    void deposite(int x)
    {
        balance += x;
        bankbalance += x;
    }
    void withdrow(int x)
    {
        if (balance > x)
        {
            balance -= x;
            bankbalance -= x;
        }
        else
        {

            cout << "\n in suffficient balance";
        }
    }
    void chekbalance()
    {
        cout<<"\n your belence is "<<balance;
        cout<<"\n total bank belence is  "<<bankbalance;

    }
};
int main()
{
    bank obj1(1000),obj2(2000);
    cout << "\n deposite 100";
    obj1.deposite(100);
    obj1.chekbalance();

    cout << "\n obj1 withdrow 10";
    obj1.withdrow(10);
    obj1.chekbalance();

    cout<<"\n -------------------------------------------------------";
    cout<<"\n ------------------this is second obj-------------------";
    cout<<"\n -------------------------------------------------------";

    cout << "\n  obj2 deposite 1000";
    obj2.deposite(1000);
    obj2.chekbalance();

    cout << "\n obj2 withdrow 100";
    obj2.withdrow(100);
    obj2.chekbalance();

    return 0;
}
;