#include <iostream>
using namespace std;
class student
{
protected:
    int roll;

public:
    void get(int r)
    {
        roll = r;
    }
};
class play : virtual public student
{
protected:
    float score;

public:
    void setscore(int r)
    {
        score = r;
    }
    void dis1()
    {
        cout << "game score is " << score << endl;
    }
};
class study : virtual public student
{
protected:
    float math, hindi;

public:
    void setmarks(int m, int n)
    {
        math = m;
        hindi = n;
    }
    void dis2()
    {
        cout << "marks in math are " << math << " and in hindi are " << hindi << endl;
    }
};
class result : public play , public study
{

    float last;

public:
    void dis3()
    {
        last = math + hindi + score;
        dis1();
        dis2();
        cout << "final marks are " << last <<" of student of roll no. "<<roll<<endl;
    }
};

int main()
{
    result R;
    R.get(101);
    R.setscore(52);
    R.setmarks(84.5,85.5);
    R.dis3();

    return 0;
}

//virtual base make possible call get() by result as it get get() by both study and play //
// if we dont use virtual so, it give error of ambiguty// 