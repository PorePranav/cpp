#include<iostream>
using namespace std;
class base{
    public:
        void fun(int x){
            cout << "In base class" << endl;
        }
};
class derived : public base{
    public:
        void fun(double y){
            cout << "In derived class\t" << y <<endl;
        }
};
int main(){
    derived d;
    d.fun(5);
    return 0;
}