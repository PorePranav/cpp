//
// Created by pranav on 7/4/22.
//

#include <iostream>
#include <string>
using namespace std;

class IllegalAccountBalance : public exception{
    public:
        IllegalAccountBalance() noexcept = default;
        ~IllegalAccountBalance() = default;
        virtual const char* what() const noexcept{
            return "Illegal Balance Exception";
        }
};

class Account{
    private:
        string name;
        double balance;
    public:
        Account(string, double);
};
Account::Account(string name, double balance){
    if(balance < 0.0)
        throw IllegalAccountBalance();
}

int main(){
    try{
        Account("Pranav", -200);
    }
    catch(const IllegalAccountBalance &ex){
        cerr<<ex.what()<<endl;
    }
}