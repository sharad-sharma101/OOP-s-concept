#include <iostream>
#include<cmath>
using namespace std;
class point{
    int x,y;
    friend float distance(point &, point &);
    public :
    static int co;
        void get(){
            int a ,b;
            cout<<"point value "<<endl;
            cin>>a>>b;
            x = a;
            y = b;
            ++co;
        }
         
        void dis(){
            cout<<"point p"<<co<<" is "<<x<<" and "<<y<<endl;
        }
};
int point::co = 0; 

float distance(point &n, point &m){
float e,f,d;
e = ((n.x - m.x)*(n.x - m.x));
f = ((n.y - m.y)*(n.y - m.y));
d = sqrt(e + f) ;
  return d;

}

int main(){
    float g;
     point p1 , p2;
        p1.get();
        p1.dis();
        p2.get();
        p2.dis();
    
    g = distance(p1,p2);
    cout<<"distance between p1 and p2 is "<<g;
return 0;
}