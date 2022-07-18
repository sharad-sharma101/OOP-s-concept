#include <iostream>
using namespace std;

//cmplex no. 
class complex {
    int a,b;

    public :
      void setdata(int x,int y){
           a = x;
           b = y;
       };
     void  setsum(complex l , complex m){
         a = l.a + m.a ;
         b = l.b + m.b;
     };
     void getf(){
         cout<<"\nyour complex no. is "<<a<<"+i"<<b; 
     };
};


int main(){
    complex c1 ,c2 ,c3;

    c1.setdata(1,2);
    c1.getf();

    c2.setdata(3,4);
    c2.getf();

    c3.setsum(c1,c2);
    c3.getf();



return 0;
}