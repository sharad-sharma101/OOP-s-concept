#include<iostream>
#include<fstream>
using namespace std;
template <class t1 , class t2>
class result{
    public:
    t1 marks;
    t2 wt;
    result(t1 a , t2 b){
        marks = a;
        wt = b; }
    void dis(){
        
        cout<<"your marks is "<<marks<<" with grade "<<wt<<endl;
    }
};


int main(){
result<int , char> r(4 ,'b') , r1(5 , 'a') , r2(5 , 'a');
r.dis();
r1.dis();
r2.dis();


return 0;
}