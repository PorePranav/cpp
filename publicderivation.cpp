#include<iostream>
using namespace std;
class base{
    protected:
        int num;
};
class derived : public base{
    public:
        void getnum(){
            num++;
        }
};
int main(){
    return 0;
}
class derived2 : private derived{
    public:
        void getnum(){
            num++;
        }
};