#include <iostream>
using namespace std;

class animal
{
    int d1;

public:
    int d2;
    void set();
    int data1();
    int data2();
};

void animal ::set()
{
    d1 = 30;
    d2 = 40;
}
int animal ::data1()
{
    return d1;
}
int animal ::data2()
{
    return d2;
}

class aqtic : animal
{
public:
    int d3;
    void get();
    void dis();
};
void aqtic ::get()
{
    set();
    d3 = data2() * data1();
}
void aqtic ::dis()
{
    cout << "first data is " << data1() << endl;
    cout << "second no. " << data2() << endl;
    cout << "third no. " << d3 << endl;
}

int main()
{

    aqtic a;
    a.get();
    a.dis();

    return 0;
}