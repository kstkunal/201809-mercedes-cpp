#include <iostream>
using namespace std;


#include "bankaccount.h"
#include "bank.h"
#include "atm.h"



int main()
{
    Bank * bank=new Bank("ICICI",12);

    bank->openAccount("Vivek","pass",20000);
    bank->openAccount("Shivanshi","pass",50000);
    bank->openAccount("Sanjay","pass",30000);

    ATM * atm=new ATM();

    atm->start();

    return 0;
}
