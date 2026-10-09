#include<iostream>
using namespace std;
class arith 
{
    int a,b;
    public:

    void setxy(int x,int y)
    {
        a=x;
        b=y;
    }
    void getxy()
    {
        cout<<"tha value of a:"<<a;
        cout<<"tha value of b:"<<b;
    }
    void dosum()
    {
        cout<<"\n sum of a and b :"<<a+b;
        
    }
    void dosub()
    {
        cout<<"\n substrection  of a and b :"<<a-b;
        
    }
    void domul()
    {
        cout<<"\n multiplication of a and b :"<<a*b;
        
    }
    void dodiv()
    {
        cout<<"\n divition of a and b :"<<a/b;
        
    }

};
int main()
{
    arith obj1;
    obj1.setxy(10,20);
    obj1.getxy();
    obj1.dosum();
    obj1.dosub();
    obj1.domul();
    obj1.dodiv();
    return 0;
}