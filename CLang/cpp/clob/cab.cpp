#include <iostream>
using namespace std;
class cab
{
public:
    int km, total, basefare = 24, platformfees = 2, x, y, z, amount;
    cab(int a)
    {
        km = a;
    }

    int fare()
    {
        if (km > 0 && km < 2)
        {
            amount = (2 - 0) * 0 + basefare + platformfees;
        }
        else if (km > 2 && km < 8)
        {
            // x = (km - 2) * 6;
            amount = 24 + (km - 2) * 6  + platformfees;
        }
        else if (km > 8 && km < 100)
        {
            // x = (km - 8) * 7;
            amount = 60 + (km - 8) * 7  + platformfees;
        }
        else
        {
            cout << "invelid choice";
        }
        return amount;
    }
};
int main()
{
    cab obj(9);

    cout << "\n base fare  is         :>" << obj.basefare;
    cout << "\n platform charges is   :>" << obj.platformfees;
    cout << "\n-----------------------------------------------";
    cout << "\n total faire is        :>" << obj.fare();
    return 0;
}