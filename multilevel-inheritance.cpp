#include <iostream>
using namespace std;

class student
{
    int roll;

public:
    int r;
    void write()
    {
        cout << "write roll no. " << endl;
        cin >> r;
        roll = r;
        cout << "roll no. of student is " << roll << endl;
    }
};
class exam : public student
{
protected:
    float math, hindi;

public:
    void get1(float m, float n)
    {
        math = m;
        hindi = n;
    }
    void dis1()
    {
        cout << "marks in math is " << math << " and hindi is " << hindi << endl;
    }
};
class result : public exam
{
public:
    void give()
    {
        cout << "your result is " << (math + hindi) / 2 << endl;
    }
};

int main()
{
    result r;
    r.write();
    r.get1(84.6, 96.5);
    r.dis1();
    r.give();

    return 0;
}