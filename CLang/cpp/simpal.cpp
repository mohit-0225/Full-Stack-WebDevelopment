#include<iostream>
using namespace std;
int intrust(int p,int r,int n)
{
    int intrust;
    intrust=p*r*n/100;

    return intrust;
}
int main()
{
    int p,r,n;

    cout<<"enter tha amount:>>";
    cin>>p;
    cout<<"enter tha rate:>>";
    cin>>r;
    cout<<"enter tha period:>>";
    cin>>n;

    cout<<"simpal intrust is :>>"<<intrust(p,r,n);
    return 0;
}