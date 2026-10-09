// #include<iostream>
// using namespace std;
// class Test
// {
//     int a,b;
//     public:
//     Test(){}
//     Test(int a,int b)
//     {
//         this->a = a;
//         this->b = b;
//     }
//     Test add(Test obj1,Test obj2)
//     {
//         Test temp;
//         temp.a= obj1.a +obj2.a;
//         temp.b= obj1.b +obj2.b;
//         return temp;
//     }
//     void show()
//     {
//         cout<<"\n a : "<<a;
//         cout<<"\t b : "<<b; 
//     }
// };
// int main()
// {
//     Test obj1(10,20),obj10(20,30),obj2;
//     obj2 = obj2.add(obj1,obj10);
//     obj1.show();
//     obj10.show();
//     obj2.show();
// }

#include <iostream>
using namespace std;
class bank
{
    int balance = 0;

public:
    bank()
    {
        balance = 0;
    }

    bank(int balance)
    {
        this->balance = balance;
        
    }
    bank deposite(bank obj)
    {

        bank depo;
        depo.balance = this->balance + obj.balance;
        return depo;
    }
    bank withdeow(bank obj)
    {
        bank depo;
        depo.balance = this->balance - obj.balance;
        return depo;
    }
    void show()
    {
        cout << "\n person balance is " << balance;
       
    }
};
int main()
{
    bank obj, obj1(2000),obj2(500);
    obj1.show();

    cout << "\n 500 deposit";
    obj = obj1.deposite(obj2);
    obj.show();
    cout << "\n 500 withdrow";
    obj = obj.withdeow(obj2);
    obj.show();
    return 0;
}
