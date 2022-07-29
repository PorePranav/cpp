#include <iostream>
using namespace std;

class Base{
    private:
        int value;
    public:
        Base() : value{0}{cout<<"Base no-args constructor"<<endl;}
        Base(int x) : value{x}{cout<<"int Base constructor"<<endl;}
        Base(const Base &source) : value(source.value){cout<<"Base copy constructor"<<endl;}
        Base& operator=(const Base &rhs){
            cout<<"Base operator="<<endl;
            if(this==&rhs)
                return *this;
            value=rhs.value;
            return *this;
        }
        ~Base(){cout<<"Base destructor"<<endl;}
};

class Derived : public Base{
    private:
        int doubledValue;
    public:
        Derived() : Base{}, doubledValue{0}{cout<<"Derived no-args constructor"<<endl;}
        Derived(int x) : Base{x}, doubledValue{x*2}{cout<<"int Derived constructor"<<endl;}
        Derived(const Derived &other):Base(other), doubledValue{other.doubledValue}{cout<<"Derived copy constructor"<<endl;}
        Derived& operator=(const Derived &rhs){
            cout<<"Derived operator="<<endl;
            if(this==&rhs)
                return *this;
            doubledValue=rhs.doubledValue;
            return *this;
        }
        ~Derived(){cout<<"Derived destructor"<<endl;}
};

int main(){
    // Base b{100};
    // Base b1{b};
    // b = b1;

    Derived d{100};
    Derived d1{d};
    d = d1;

    return 0;
}
