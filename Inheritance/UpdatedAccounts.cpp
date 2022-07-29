#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Account{  
    friend ostream& operator<<(ostream &, const Account&);
    protected:
        string name;
        double balance;
    public:
        Account(string = "Unnamed", double = 0.0);
        bool deposit(double);
        bool withdraw(double);
        double getBalance()const{return this->balance;}
};
Account::Account(string name, double balance) : name{name}, balance{balance}{}
bool Account::deposit(double amount){
    if(amount<0)
        return false;
    else{
        balance+=amount;
        return true;
    }
}

bool Account::withdraw(double amount){
    if(balance-=amount>=0){
        balance-=amount;
        return true;
    }
    return false;
}

ostream& operator<<(ostream &os, const Account &account){
    os<<"[Account: "<<account.name<<" : "<<account.balance<<"]";
    return os;
}

class Savings : public Account{
    friend ostream& operator<<(ostream&, const Savings&);
    protected:
        double intRate;
    public:
        Savings(double = 0.0);
        bool deposit(double);
};

Savings::Savings(double intRate) : intRate(intRate){}
bool Savings::deposit(double amount){
    int toAdd = amount*(intRate/100);
    return Account::deposit(toAdd);
}

ostream& operator<<(ostream &os, const Savings& savings){
    os<<"[Savings Account: "<<savings.name<<" : "<<savings.balance<<" : Intrest Rate: "<<savings.intRate<<"% ]";
    return os;
}

void display(const vector<Account> &accounts){
    cout<<"\n========Accounts========"<<endl;
    for(const auto &acc: accounts)
        cout<<acc<<endl;
}
void deposit(vector<Account> &accounts, double amount){
    cout<<"=========Depositing to Accounts========"<<endl;
    for(auto &acc: accounts){
        if(acc.deposit(amount))
            cout<<"Deposited "<<amount<<" to "<<acc<<endl;
        else
            cout<<"Failed to deposit "<<amount<<" to "<<acc<<endl;
    }
}
void withdraw(vector<Account> &accounts, double amount){
    cout<<"=========Withdrawing from Accounts========"<<endl;
    for(auto &acc: accounts){
        if(acc.withdraw(amount))
            cout<<"Withdrawn "<<amount<<" from "<<acc<<endl;
        else
            cout<<"Failed to withdraw "<<amount<<" from "<<acc<<endl;
    }
}

void display(const vector<Savings> &accounts, double amount){
    cout<<"\n========Saving Accounts========"<<endl;
    for(const auto &acc: accounts)
        cout<<acc<<endl;
}

void deposit(vector<Savings> &accounts, double amount){
    cout<<"=========Depositing to Savings Accounts========"<<endl;
    for(auto &acc: accounts){
        if(acc.deposit(amount))
            cout<<"Deposited "<<amount<<" to "<<acc<<endl;
        else
            cout<<"Failed to deposit "<<amount<<" to "<<acc<<endl;
    }
}
void withdraw(vector<Savings> &accounts, double amount){
    cout<<"=========Withdrawing from Savings Accounts========"<<endl;
    for(auto &acc: accounts){
        if(acc.withdraw(amount))
            cout<<"Withdrawn "<<amount<<" from "<<acc<<endl;
        else
            cout<<"Failed to withdraw "<<amount<<" from "<<acc<<endl;
    }
}

int main(){
    cout<<"Hello World"<<endl;
    return 0;
}