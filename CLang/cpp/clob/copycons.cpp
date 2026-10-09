// #include <iostream>
// using namespace std;
// class febric
// {
//     int febriccode;

// public:
//     febric() {}
//     febric(int code)
//     {
//         febriccode = code;
//     }
//     febric(febric &obj)
//     {
//         febriccode=obj.febriccode;
//     }
//     void show()
//     {
//         cout<<"\n product:>"<<febriccode;
//     }
// };
// int main()
// {
//     febric mohit(1122);
//     mohit.show();
//     febric mihir(mohit);
//     mihir.show();

//     return 0;
// }

// bank

#include <iostream>
using namespace std;

class saving
{
    int balance;

public:
    saving(int amount)
    {
        balance = amount;
    }
    saving(saving &obj)
    {
        balance = obj.balance;
    }
    void show()
    {
        cout<<"\n banalce is :>>"<<balance;
    }
};
int main()
{
    saving person1(10000);
    person1.show();
    saving person2(person1);
    person2.show();
}
