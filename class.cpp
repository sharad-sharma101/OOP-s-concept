#include <iostream>
using namespace std;

class emplo {
    private:
         int a,b,c;
    public:
        int d,e;
        void setdata(int x, int y, int z);
        void getdata(){
                cout<<"private no."<<a<<b<<c;
                cout<<"\npublic no,"<<d<<e;
        };
};
void emplo :: setdata(int x, int y, int z){
    a=x;
    b=y;
    c=z;
};

int main(){
    emplo sh;
    sh.d=0;/*here we put value of e, and d as they r public but cannot
     change a,b,c as they r private and directly change through class*/
    sh.e=0;
    sh.setdata(3,4,5);
    sh.getdata();

return 0;
}
