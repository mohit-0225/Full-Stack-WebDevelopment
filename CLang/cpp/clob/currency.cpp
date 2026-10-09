#include <iostream>
using namespace std;
class currency
{

public:
    float usd(float x)
    {
        return x * 93.3963;
    }
    float cny(float x)
    {
        return x * 13.5876;
    }
    float rub(float x)
    {
        return x * 1.1598;
    }
    float kwd(float x)
    {
        return x * 302.7439;
    }
    float eur(float x)
    {
        return x * 108.4224;
    }
};
int main()
{
    currency obj1;
    int rupy, choice, exit=0;

    while (exit == 0)
    {

        cout << "\n enter your amount";
        cin >> rupy;

        cout << "\n enter your choice";
        cout << "\n 1. convert in  US usd";
        cout << "\n 2. convert in  Chinese  cny";
        cout << "\n 3. convert in  Russian rub";  
        cout << "\n 4. convert in  kuwaity kwd";
        cout << "\n 5. convert in  Euro eur";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\n tha us doler is :> " << obj1.usd(rupy);
            break;
        case 2:
            cout << "\n tha Chinese  cny is :> " << obj1.cny(rupy);
            break;
        case 3:
            cout << "\n tha Russian rub is :> " << obj1.rub(rupy);
            break;
        case 4:
            cout << "\n tha kuwaity kwd is :> " << obj1.kwd(rupy);
            break;
        case 5:
            cout << "\n tha Euro eur is :> " << obj1.eur(rupy);
            break;

        default:
            cout << "Invelid choice";
            break;
        }
        cout << "\n enter \n0 for Main Manu \n 1 for Complite\n";
        cin >> exit;
    }

    return 0;
}