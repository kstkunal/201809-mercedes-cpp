#include <iostream>

using namespace std;

struct Triangle
{
    int s1,s2,s3;

    int perimeter()
    {
        return s1+s2+s3;
    }
};

class Rectangle
{
public:
    int w,h;

    int perimeter()
    {
        return 2*(w+h);
    }
};


int main()
{
    Triangle t={3,4,5}; //No need to prefix it with struct
    Rectangle r;//={3,4};

    cout    <<"t.s1="<<t.s1<<endl
            <<"t.s2="<<t.s2<<endl
            <<"t.s3="<<t.s3<<endl;

    cout <<"t.perimeter()="<<t.perimeter()<<endl;


    r.w=3;
    r.h=4;

    cout<<"Perimeter of Rectangle["<<r.w<<","<<r.h<<"] ="<<r.perimeter()<<endl;



    Triangle t2={3,4,20};

    cout<<"perimeter of t2 is "<<t2.perimeter()<<endl;


    return 0;
}
