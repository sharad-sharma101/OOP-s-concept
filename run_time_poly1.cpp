#include <iostream>
using namespace std;
class base{
    public :
    int a;
    virtual void dis(){
        cout<<"base class vareable "<<a<<endl;
    }
};
class derived : public base{
    public :
    int b = 8;
    void dis(){
        cout<<"derived class vareable "<<b<<endl;
    }
};

int main(){
base *bp;
base e;
derived d;
bp = &d; // base point pointing derived class vareable
                          //  bp->b =8; //....throw error 
bp->a =5;
bp->dis();


derived *dp;
dp = &d;
dp->a=88;
dp->b=89;
dp->dis();

return 0;
}