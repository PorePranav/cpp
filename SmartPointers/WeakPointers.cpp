#include <iostream>
#include <memory>
using namespace std;

class B;

class A{
    private:
        shared_ptr<B> b_ptr;
    public:
        void setB(shared_ptr<B> &b){
            b_ptr = b;
        }
        A(){cout<<"A constructor"<<endl;}
        ~A(){cout<<"A destructor"<<endl;}
};

class B{
    private:
        shared_ptr<A> a_ptr;
    public:
        void setA(shared_ptr<A> &a){
            a_ptr = a;
        }
        B(){cout<<"B constructor"<<endl;}
        ~B(){cout<<"B destructor"<<endl;}
};

int main(){
    shared_ptr<A> a = make_shared<A>();
    shared_ptr<B> b = make_shared<B>();
    a->setB(b);
    b->setA(a);
}