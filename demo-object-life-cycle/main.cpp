#include <iostream>

using namespace std;

#include "number.h"

Number g=1; //global object

int main()
{
    cout<<"start of main"<<endl;

    Number l1=Number(); //explicit call to 0 arg constructor

    Number l2=Number(10); //explicit call to 1 arg constructor
    Number l3(20); //implicit call to 1 arg constructor
    Number l4=30; //implicit call to 1 arg constructor

    Number l5; //implicit call to 0 arg constructor

    cout<<endl<<endl<<" starting a for loop"<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<"start of loop:"<<i<<endl;
        Number block(1000);
        static Number sblock(2000);

        block.increment();
        sblock.increment();

        cout<<"block number is "<<block.get()<<endl;
        cout<<"static block number is "<<sblock.get()<<endl;
        cout<<"end of loop:"<<i<<endl;
    }

    cout<<"end of for loop"<<endl<<endl;


    cout<<"end of program"<<endl;




}
