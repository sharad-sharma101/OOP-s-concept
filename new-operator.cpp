#include <iostream>
using namespace std;
class op{
    int a;
    int b;
    public :
   void getdata(int x ,int y){
       a = x;
       b = y;
    }
    void dis(){
        cout<<"your no. are "<<a<<" and "<<b<<endl;
    }
};


int main(){
//new operator//
op *p = new op;         //also written as  op c; 
                        //                op *p = &c;
(*p).getdata(4,5);
  p->dis();             // arrow operator

op *p1 =  new op[3];   
p1[0].getdata(50,40);  // also written as *(p1).getdata()
p1[1].getdata(88,89);  // also written as *(p1 + 1).gatedata()
(p1+2)->getdata(55,56);//by arrow operator
for (int i = 0; i < 3; i++)
{
    p1[i].dis();
};


op *p2 =  new op[3];   
p2[0].getdata(50,40);  // also written as *(p1).getdata()
p2[1].getdata(88,89);  // also written as *(p1 + 1).gatedata()
(p2+2)->getdata(55,56);//by arrow operator
delete[] p2;             // delete operator delet the memory u may or may not get alloted no.
for (int i = 0; i < 3; i++)
{
    p1[i].dis();
};


return 0;
}