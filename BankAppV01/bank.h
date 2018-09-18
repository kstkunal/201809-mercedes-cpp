

class Bank
{
        char *name; //banks name
        double interestRate;

public:
        Bank(char *name, double interestRate);

        int openAccount(char *accountName, char * password, int amount);

        bool closeAccount(int accountNumber, char* password);

        bool deposit(int account, int amount);

        bool withdraw(int account,int amount, char * challengePassword);

        bool transfer(int fromAccount, int amount, char * challengePassword, int toAccount);

        void creditInterest();

        void showAccountList();

        void setInterestRate(double rate);
        double getInterestRate(double rate);

        int getAccountCount();
};
