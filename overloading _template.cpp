#include <iostream>
using namespace std;
 
//  template <class T>
// class Harry
// {
// public:
//     T data;
//     Harry(T a){
//         data = a;}
// };
//     template <class T>
//     void Harry<T> :: display(){
//         cout << data;}

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
// template<class T>
// void func(T a){
//     cout<<"I am templatised func() "<<a<<endl;
// }
int main()
{
    // Harry<float> h(5.7);
    // cout << h.data << endl;
    // h.display();
    func(5);
    return 0;
}