#include <iostream>

using namespace std;

struct Triangle
{
private:
    int s1,s2,s3;
public:



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
    Triangle t1;  //explicit call to multi-arg constructor
    t1.set(3,4,5);  //valid traingle
    test_triangle(t1);


    //Triangle t2={3,4,20};
    Triangle t2=Triangle(); //explicit call to the constructor
    t2.set(3,4,20); //invalid triangle
    //print_triangle_info(t2);
    test_triangle(t2);



    Triangle t3;
    //missed calling set
    test_triangle(t3); //valid or invalid???


    return 0;
}
