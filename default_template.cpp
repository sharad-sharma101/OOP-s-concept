#include<iostream>
#include<fstream>
using namespace std;

template<class t = int>
class sharad{
    t raiting ;
    public :
     sharad(t a){
         raiting = a;
     }
     void dis(){
         cout<<"give rating or grade to sharad "<<raiting<<endl;
     } 
};

int main(){
sharad<> s1(4) ;
sharad<char> s2('c');
s1.dis();
s2.dis();




return 0;
}
// this template also use in function //
