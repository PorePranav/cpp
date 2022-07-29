#include <iostream>
using namespace std;

class Account{
    private:
        friend ostream& operator<<(ostream &os, const Account &account);
    protected:
        double balance;
    public:
        Account();
        Account(double);
        void deposit(double);
        void withdraw(double);
};
Account::Account():balance{0.0}{}
Account::Account(double b):balance{b}{}
void Account::deposit(double amount){
    balance+=amount;
}
void Account::withdraw(double amount){
    if(this->balance-amount>=0)
        this->balance-=amount;
    else    
        cout<<"Insufficient funds"<<endl;
}
ostream& operator<<(ostream &os, const Account &account){
    os<<"Account balance: "<<account.balance;
    return os;
}

class Savings : public Account{
    friend ostream& operator<<(ostream &os, const Savings&);
    protected:
        double intRate;
    public:
        Savings();
        Savings(double, double);
        void deposit(double);
};

Savings::Savings(double balance, double intRate): Account(balance), intRate(intRate){}
Savings::Savings():Savings{0.0, 0.0}{}
void Savings::deposit(double amount){
    amount+=(amount*(intRate/100));
    Account::deposit(amount);
}

ostream& operator<<(ostream &os, const Savings &account){
    os<<"Savings account balance: "<<account.balance<<" Intrest rate: "<<account.intRate;
    return os;
}

int main(){
    cout<<"============Account Class============="<<endl;
    Account a1 {1000.0};
    cout<<a1<<endl;

    a1.deposit(500.0);
    cout<<a1<<endl;

    a1.withdraw(1000.0);
    cout<<a1<<endl;

    a1.withdraw(5000.0);
    cout<<a1<<endl;

    cout<<"===========Savings Class=============="<<endl;
    Savings s1{1000, 5.0};
    cout<<s1<<endl;

    s1.deposit(1000);
    cout<<s1<<endl;

    s1.withdraw(2000);
    cout<<s1<<endl;

    s1.withdraw(1000);
    cout<<s1<<endl;

    return 0;
}