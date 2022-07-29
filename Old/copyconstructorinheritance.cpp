#include<iostream>
using namespace std;
class base{
    protected:
        int base_number;
    public:
        base(int = 0);
        base(const base&);
        ~base();
        int get_base_number()const;
};
inline base::base(int x) : base_number(x){
    cout << "In Constructor" <<endl;
}
inline base::base(const base& s){
    cout << "In base copy constructor" << endl;
    base_number = s.base_number;
}
inline base::~base(){
    cout << "In Deconstructor" << endl;
}
inline int base::get_base_number()const{
    return base_number;
}
class derived : public base{
        int derived_number;
    public:
        derived(int = 0, int = 0);
        derived(const derived&);
        ~derived();
        int get_derived_number()const;
};
inline derived::derived(int a, int b) : base(a) , derived_number(b){
    cout << "In derived constructor" << endl;
}
inline derived::derived(const derived& s){
    cout << "In derived copy constructor" << endl;
    derived_number = s.derived_number;
}
inline derived::~derived(){
    cout<<"In derived deconstructor"<<endl;
}
inline int derived::get_derived_number()const{
    return derived_number;
}
int main(){
    derived d1(4,2);
    derived d2=d1;
    cout << "d2 = ("<<d2.get_base_number() << "," << d2.get_derived_number() << ")" << endl;
}