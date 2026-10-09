#include <iostream>
using namespace std;
static int pass,fail;

class result
{
public:
    int s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int total, percentage;
    result(){}
    result(int a, int b, int c, int d, int e)
    {
        s1 = a, s2 = b, s3 = c, s4 = e, s5 = d;
    }
    void mark()
    {

        total = s1 + s2 + s3 + s4 + s5;
        cout << "\n mark is " << total;

        per(total);
    }
    void per(int total)
    {
        percentage = total / 5;
        cout << "\n percentage is :>" << percentage;
        if(percentage>35)
            pass+=1;
        else
            fail+=1;



        gread(percentage);
    }
    void gread(int percentage)
    {
        if (percentage >= 75)
        {
            cout << "\n your garde is a.  very goood";
        }
        else if (percentage >= 60)
        {
            cout << "\n your garde is b. goood";
        }
        else if (percentage >= 45)
        {
            cout << "\n your garde is c. need of prectice";
        }
        else if (percentage >= 35)
        {
            cout << "\n your garde is D bad you have to do hard work ";
        }
        else
        {
            cout << "\n you Are Fail beter luck next time";
        }
        cout<<"\n";
    }
};
 

int main()
{
    result obj(45, 65, 76, 87, 98), obj2(0,0,0,0,0), obj3(45, 65, 76, 87, 98), obj4(45, 65, 76, 87, 98);
    result test;
    // int s1, s2, s3, s4, s5;

    // cout << "Enter mark of subject 1:>";
    // cin >> s1;
    // cout << "Enter mark of subject 2:>";
    // cin >> s2;
    // cout << "Enter mark of subject 3:>";
    // cin >> s3;
    // cout << "Enter mark of subject 4:>";
    // cin >> s4;
    // cout << "Enter mark of subject 5:>";
    // cin >> s5;

    cout << "\n student 1\n ";
    obj.mark();
    cout << "\n student 2\n ";
    obj2.mark();
    cout << "\n student 3\n ";
    obj3.mark();
    cout << "\n student 4\n ";
    obj4.mark();

    cout<<"\n\ntotal student:>"<< pass + fail;
    cout<<"\n\npass student :>"<<pass;
    cout<<"\n\nfail student :>"<<fail;

    return 0;
}
