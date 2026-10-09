#include<iostream>
using namespace std;
class arith 
{
    int p,n,r;
    public:
    void setx(int x)
    {
        p=x;
    }
    void sety(int y)
    {
        n=y;
    }
    void setz(int z)
    {
        r=z;
    } 
    int getx()
    {
        return p;
    }
    int gety()
    {
        return r;
    }
    int getz()
    {
        return n;
    }
    int intrust()
    {
        return (p * r * n / 100);
    }

    

};
int main()
{
    arith obj1;
    obj1.setx(1000);
    obj1.sety(10);
    obj1.setz(2);
    cout<<"\n"<<obj1.getx();
    cout<<"\n"<<obj1.gety();
    cout<<"\n"<<obj1.getz();

    cout<<"\n"<<obj1.intrust();

    
    return 0;
}