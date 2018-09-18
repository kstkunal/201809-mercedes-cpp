
class BankAccount
{
private:
    int accountNumber;  //4 byte
    char name[50];      //50 byte
    char password[50];  //50 byte
    double balance;     //8 byte
    static double interestRate; //shared and not owned by object 8 byte
    static int accountCount;

public:

    //since interestRate is not a part of each individual object, the (shouldn't be) initialized in constructor

    BankAccount( char *name, char *password, double amount);

    bool deposit(double amount);

    //actual function exists in cpp file
    bool withdraw(double amount, char * password);

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

    static double getInterestRate(){return interestRate;}

    static void setInterestRate(double rate){interestRate=rate;}


    //security risk
    //char * getPassword() {return password;}

    //better authenticate
    bool authenticate(char *challengePassword); //I can tell if this password is correct or not

    //no set passoword

    void changePassword(char *oldPassword, char *newPassword); //I will change password if oldPassword is correct


    static int getAccountCount(){return accountCount;}

    void show();

};
