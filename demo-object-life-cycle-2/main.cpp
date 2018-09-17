#include <iostream>

using namespace std;

#include "number.h"

Number g=1;  //created #1 --->destroyed #7

int main()
{
    Number l1=10;  //created #2   ---> destroyed #4
    static Number l2=2; //created #3  -->destroyed #6
    Number l3=20;  //created #4  ---> destroyed #3

    cout<<"before after block"<<endl;
    {
        Number l4=200;  //created #5  ---> destroyed #1
        static Number l5=3; //created #6 --> destroyed 5
    }

    cout<<"after block"<<endl;
    Number l6=30;  //created #7   ---> destroyed #2


    cout<<"creating a pointer"<<endl;
    Number * p, *q;  //no object created, no constructor called.
    cout<<"pointer created"<<endl;

    cout<<"\n\ncreating dynamic object "<<endl;
    p=new Number(1000); //calls 1 arg constructor

    q= new Number; //calls 0 arg constructor
    cout<<"dynamic objects created\n\n"<<endl;

    cout<<"destroying the dynamic object"<<endl;
    delete q;
    //note p is not destroyed.
    cout<<"\ndynamic object destroyed\n\n"<<endl;



    cout<<"\n\ncreating a reference"<<endl;

    //Number &r; //reference must refer to something

    Number &r= l1; //refers to l1. not a new object. no constructor called.

    cout<<"\n\nreference created "<<endl;





    cout<<"end of program"<<endl;

    return 0;
}
