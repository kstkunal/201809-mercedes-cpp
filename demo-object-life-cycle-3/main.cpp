#include <iostream>

using namespace std;
#include "Number.h"


void increment_and_show(Number n)
{
    cout<<"incrementing "<<n.get()<<endl;
    n.increment();
    cout<<"show after increment:"<<n.get()<<endl;
    cout<<"end of increment_and_show"<<endl;
}

void doubleIt(Number *p)
{
    cout<<"in doubleIt"<<endl;
    p->set(p->get()*2);
    cout<<"end of  doubleIt"<<endl;
}

void squareIt(Number &n)
{

    cout<<"in squareIt"<<endl;
    int x=n.get();
    n.set(x*x);
    cout<<"end of squareIt"<<endl;
}


int main()
{
    Number n1(40);

    increment_and_show(n1);
    cout<<"back to main after increment_and_show: "<<n1.get()<<endl;


    doubleIt(&n1);
    cout<<"back to main after doubleIt:"<<n1.get()<<endl;

    squareIt(n1);
    cout<<"back to main after squareIt:"<<n1.get()<<endl;


    cout<<"end of main"<<endl;
    return 0;
}
