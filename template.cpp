#include<iostream>
#include<fstream>
using namespace std;

template <class t>
class vector{
    public :
    t *ar ;
    int s;
     vector(int m){
        s = m;
        ar = new int[s];}

    t product(vector &v){
        t d =0;
        for (int i = 0; i < s; i++)
        {
            d += this->ar[i]  *   v.ar[i]; }
            return d;}
        };


int main(){

vector <int>v1(3);
v1.ar[0] = 3;
v1.ar[1] = 4;
v1.ar[2] = 1;
vector <int> v(3);
v.ar[0] = 2;
v.ar[1] = 0;
v.ar[2] = 1;
int a = v1.product(v);
cout<<a<<endl;
return 0;
}