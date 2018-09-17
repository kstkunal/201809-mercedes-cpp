#include <iostream>

using namespace std;


void swapv(int a,int b)
{
    int t=a;
    a=b;
    b=t;
    cout<<"after swapv: a="<<a<<"\tb="<<b<<endl;
}

void swapp(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
    cout<<"after swapp: a="<<*a<<"\tb="<<*b<<endl;
}

void swapr(int &a,int &b)
{
    int t=a;
    a=b;
    b=t;
    cout<<"after swapr: a="<<a<<"\tb="<<b<<endl;
}

int main()
{
    int x=20, y=30;


    cout<<"before swapv: x="<<x<<"\ty="<<y<<endl;
    swapv(x,y);
    cout<<"after swapv: x="<<x<<"\ty="<<y<<endl;

    cout<<"before swapp: x="<<x<<"\ty="<<y<<endl;
    swapp(&x,&y);
    cout<<"after swapp: x="<<x<<"\ty="<<y<<endl;


    cout<<"before swapr: x="<<x<<"\ty="<<y<<endl;
    swapr(x,y);
    cout<<"after swapr: x="<<x<<"\ty="<<y<<endl;



    return 0;
}




int test()
{
    int x=20;

    int *ptr= &x; //stores the address of x

    int & r = x ; //just another alias name for same variable x. No new memory allocated.

    cout<<"value of x is "<<x<<"\t"<<*ptr<<"\t"<<r<<endl;
    cout<<"address of x is "<< &x << "\t" << ptr<< "\t" << &r << endl;

    int y=10;


    ptr = & y;  //ptr now points to address of y

    cout<<"ptr="<< ptr <<"\t*ptr="<< *ptr<< endl;

    r=y; //r always refers to x to r=y --> x=y

    cout<<"r="<<r<<"\t&r="<<&r<<endl;


    return 0;
}
