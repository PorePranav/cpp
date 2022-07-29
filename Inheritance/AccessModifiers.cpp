#include <iostream>
using namespace std;

class Base{
    public:
        int a {0};
        void display(){cout<<a<<", "<<b<<", "<<c<<endl;}
    protected:
        int b {0};
    private:
        int c {0};
};
class Derived : public Base{
    public:
        void accessBaseMembers(){
            a = 100;
            b = 200;
            // c = 300;
        }
};
int main(){
    cout<<"========Base member access from base objects========="<<endl;
    Base base;
    base.a = 100;
    // base.b = 200;
    // base.c = 300;

    cout<<"========Derived member access from base objects========="<<endl;
    Derived derived;
    derived.a = 100;
    // derived.b = 200;
    // derived.c = 300;

    return 0;
}