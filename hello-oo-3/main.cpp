#include <iostream>

using namespace std;

struct Triangle
{
private:
    int s1,s2,s3;
public:

    Triangle(int s1,int s2,int s3)
    {
        set(s1,s2,s3);
    }

    Triangle(int side)
    {
        set(side,side,side);
    }

    Triangle() //explicit 0 arg constructor
    {
        set(1,1,1);
    }

    void set(int x, int y, int z)
    {
        if(x>0 && y>0 && z>0 && x+y>z && y+z>x && x+z>y)
        {
            s1=x;
            s2=y;
            s3=z;
        }
        else
        {
            s1=-1; //indicates error
        }

    }

    bool is_valid()
    {
        return s1!=-1;

    }

    int perimeter()
    {
        if(is_valid())
            return s1+s2+s3;
        else
            return -1; //to indicate invalid
    }

    void print()
    {
        if(is_valid())
            cout <<"Triangle<" << s1<<","<<s2<<","<<s3<<"> "<<endl;
        else
            cout<< "Invalid Triangle"<<endl;
    }

};


void test_triangle(Triangle t)
{
    t.print();
    cout<<"perimeter is "<<t.perimeter()<<endl<<endl<<endl;

}


int main()
{
    //Triangle t={3,4,5}; //No need to prefix it with struct
    Triangle t1=Triangle(3,4,5);  //explicit call to multi-arg constructor
    test_triangle(t1);

    Triangle t2(3,4,15); //implicit call to multi-arg constructor
    test_triangle(t2);


    Triangle t3=Triangle(5); //explicit call to 1 arg constructor
    test_triangle(t3);

    Triangle t4(6); //implicit call to 1 arg constructor
    test_triangle(t4);


    Triangle t5=7;  //implicit call to 1 arg constructor only. assign the only arg to the object
    test_triangle(t5);


    //zero argument constructors

    Triangle t6= Triangle(); //explicit call to zero arg constructor
    test_triangle(t6);


    //not an implicit call to 0 argument constructor
    Triangle t7(); //should be prototype of a function 't7' that takes nothing and returns a Triangle

    //test_triangle(t7); //t7 is undefined


    //implicit call to 0 argument constructor

    Triangle t8;  //invokes 0 argument constructor
    test_triangle(t8);






    return 0;
}
