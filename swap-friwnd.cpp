#include <iostream>
using namespace std;
class y;
//find error//
class x
{
    int val;
    friend void swap(x &a, y &b);

public:
    void setdata1(int c)
    {
        val = c;
    }
    void get(){
        cout<<"after effect"<<val<<endl;
    }
    
};

class y
{
    int val1;
    friend void swap(x &a, y &b);

public:
    void setdata(int c)
    {
        val1 = c;
    } 
    void get(){
        cout<<"after effect"<<val1<<endl;
    }
    
};

void swap(x &a, y &b)
{
    int t;
    t = y.val1;
    x.val = y.val1;
    y.val1 = t;

};

int main()
{
    x c1;
    c1.setdata1(2);
    y c2;
    c2.setdata(5);
    swap(c1, c2);

    return 0;
}