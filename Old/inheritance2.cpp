#include<iostream>
using namespace std;
class base{
    protected:
        int number;
    public:
        base(int = 0);
        ~base();
        int get_number()const; 
};
inline base::base(int x) : number(x){
    cout<<"In Constructor"<<endl;
}
inline int base::get_number()const{
    return number;
}
base::~base(){
    cout<<"In Deconstructor"<<endl;
}
class derived : public base{

};
int main(){
    base a;
    derived d;
    cout<< a.get_number() <<endl;
    return 0;
}
