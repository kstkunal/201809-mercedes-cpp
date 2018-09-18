#include <iostream>
using namespace std;


#include "bankaccount.h"

int main()
{

    BankAccount a1(1,"Vivek","pass",20000,12);

    a1.authenticate("hello");

    a1.show();

    a1.deposit(-1); //should fail

    a1.deposit(10000); //should work

    a1.withdraw(-1,"pass"); //should fail

    a1.withdraw(100,"wrong-pass"); //should fail

    a1.withdraw(50000,"pass"); //should fail

    a1.withdraw(5000,"pass"); //should pass

    a1.show(); //balance of 25000



    return 0;
}
