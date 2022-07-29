#include <iostream>
using namespace std;
class Base{
    public:
        void sayHello() const{
            cout<<"Hello - I am a base class object"<<endl;
        }
};

class Derived : public Base{
    public:
        void sayHello() const{
            cout<<"Hello - I am a derived class object"<<endl;
        }
};
void greeting(const Base& obj){
    obj.sayHello();
}

int main(){
    Base baseClass;
    Derived derivedClass;

    baseClass.sayHello();
    derivedClass.sayHello();

    greeting(baseClass);
    greeting(derivedClass);

    return 0;
}