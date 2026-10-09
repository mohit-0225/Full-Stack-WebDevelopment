#include <iostream>
using namespace std;
class loc
{
    int longitude, latitude;

public:
    loc() {}
    loc(int lg, int lt)
    {
        longitude = lg;
        latitude = lt;
    }
    void show()
    {
        cout << longitude << " ";
        cout << latitude << "\n";
    }
    loc operator+(loc op2);
    loc operator-(loc op2);
    loc operator++();
};
// Overload + for loc.
loc loc::operator+(loc op2)
{
    loc temp;
    temp.longitude = op2.longitude + longitude;
    temp.latitude = op2.latitude + latitude;
    return temp;
}
loc loc::operator-(loc op2)
{
    loc temp;
    temp.longitude = op2.longitude - longitude;
    temp.latitude = op2.latitude - latitude;
    return temp;
}
loc loc::operator++()
{
    longitude++;
    latitude++;
    return *this;
}
int main()
{
    loc ob1(10, 20), ob2(5, 30);
    cout<<"\n ========== oprater + ==========\n";
    ob1.show(); // displays 10 20
    ob2.show(); // displays 5 30
    ob1 = ob1 + ob2;
    ob1.show(); // displays 15 50
    cout<<"\n ========== oprater - ==========\n";
    ob1.show();
    ob2.show();
    ob1 = ob2 -ob1;
    ob1.show();
    cout<<"\n ========== oprater ++ ==========\n";
    ++ob1;
    ++ob2;
    ob1.show();
    ob2.show();
    ob1 = ob2 - ob1;
    ob1.show();

    return 0;
}
