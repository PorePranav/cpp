#include<iostream>
using namespace std;

class base{
    protected:
        int base_number;
    public:
        base(int = 0);
        ~base();
        void get_base_number()const;
};
inline base::base(int x) : base_number (x){
    cout << "in base constructor" <<endl;
}
inline base::~base(){

}
inline void base::get_base_number()const{
    cout << "The Base number is " << base_number << endl;
}
class derived : public base{
    public:
        int derived_number;
        derived(int = 0 , int = 0);
        ~derived();
        void get_derived_number()const;
};
inline derived::derived(int a, int b) : base(a) , derived_number(b){
    cout << "In derived constructor" << endl;
}
inline derived::~derived(){

}
inline void derived::get_derived_number()const{
    cout << "The derived number is :" << base_number << endl;
}
int main(){
    base base_no(5);
    derived derived_no(10);

    base_no.get_base_number();
    derived_no.get_base_number();
}