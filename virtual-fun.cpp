#include <iostream>
using namespace std;
class shop{
    protected :
        string title;
        float raiting;
    public:
        shop(float f){
            
            raiting =f;
        }
        virtual void dis(){}

};

class video : public shop{
    int time;
    public :
      video(float f ,int t) : shop(f){
         time = t;
      }
      void dis(){
          cout<<"raiting is "<<raiting;
          cout<<"timing of video  is "<<time<<" min."<<endl;
      }
};

class text : public shop{
    int word;
    public :
       text(float f , int w) : shop(f){
           word = w;
       }
       void dis(){
           cout<<"raiting is "<<raiting;
           cout<<"word count of page  is "<<word<<endl;
       }
};

int main(){

shop *sp;
video v(4.8 , 15);
text t(3.9 , 250);
sp = &v;
sp->dis();
sp = &t;
sp->dis();

return 0;
}