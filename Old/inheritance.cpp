#include<iostream>
using namespace std;
class base{
    public:
        int num;
};
class derived : private base{
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