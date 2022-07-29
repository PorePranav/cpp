#include <iostream>
#include <string>
using namespace std;

class Account{
    public:
        string name;
        double balance;
        void deposit(double);
        void withdraw(double);
        Account();
        ~Account();
};
Account::Account():balance{0}, name{"An Account"}{}
Account::~Account(){}

void Account::deposit(double amount){
    cout<<"Account deposit called with: "<<amount<<endl;
}

void Account::withdraw(double amount){
    cout<<"Account withdraw called with: "<<amount<<endl;
}

class Savings : public Account{
    public:
        double intRate;
        Savings();
        ~Savings();
        void deposit(double);
        void withdraw(double);
};

Savings::Savings():intRate{3.0}{}
Savings::~Savings(){}

void Savings::deposit(double amount){
    cout<<"Savings deposit called with: "<<amount<<endl;
}

void Savings::withdraw(double amount){
    cout<<"Savings withdraw called with: "<<amount<<endl;
}

int main(){
    cout<<"\n===============Account==============="<<endl;
    Account acc{};
    acc.deposit(2000.0);
    acc.withdraw(500.0);

    cout<<endl;

    Account *ptrAcc {nullptr};
    ptrAcc = new Account();
    ptrAcc->deposit(1000.0);
    ptrAcc->withdraw(500.0);

    cout<<"\n===============Savings==============="<<endl;
    Savings savAcc {};
    savAcc.deposit(2000.0);
    savAcc.withdraw(500.0);

    cout<<endl;

    Savings *ptrSav {nullptr};
    ptrSav = new Savings;
    ptrSav->deposit(1000.0);
    ptrSav->withdraw(500.0);

    delete ptrAcc, ptrSav;
    return 0;
}