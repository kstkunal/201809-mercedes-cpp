
class BankAccount
{
private:
    int accountNumber;
    char name[50];
    char password[50];
    double balance;
    double interestRate;

public:
    BankAccount(int accountNumber, char *name, char *password, double amount, double rate);

    void deposit(double amount);

    //actual function exists in cpp file
    void withdraw(double amount, char * password);

    //inline implementation
    void creditInterest()
    {
        balance+=(balance*interestRate/1200);
    }

    char * getName() {return name;}

    void setName(char *newName);



    int getBalance(){return balance;}

    //balance can't be set. try using deposit or withdraw
    //void setBalance(double balance){this->balance=balance;}


    int getAccountNumber(){return accountNumber;}

    //no set account number

    double getInterestRate(){return interestRate;}

    void setInterestRate(double rate){interestRate=rate;}


    //security risk
    //char * getPassword() {return password;}

    //better authenticate
    bool authenticate(char *challengePassword); //I can tell if this password is correct or not

    //no set passoword

    void changePassword(char *oldPassword, char *newPassword); //I will change password if oldPassword is correct




    void show();

};
