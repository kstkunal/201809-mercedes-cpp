#include "bank.h"


Bank::Bank(char *name, double interestRate){}

int Bank::openAccount(char *accountName, char * password, int amount){return 0;}

bool Bank::closeAccount(int accountNumber, char* password){return false;}

bool Bank::deposit(int account, int amount){return false;}

bool Bank::withdraw(int account,int amount, char * challengePassword){return false;}

bool Bank::transfer(int fromAccount, int amount, char * challengePassword, int toAccount){return false;}

void Bank::creditInterest(){}

void Bank::showAccountList(){}

void Bank::setInterestRate(double rate){}
double Bank::getInterestRate(double rate){return 0;}

int Bank::getAccountCount(){return 0;}
