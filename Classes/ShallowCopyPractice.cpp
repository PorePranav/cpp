#include <iostream>
using namespace std;
class Shallow{
    private:
        int* data;
    public:
        int getData(){return *data;}
        void setData(int d){*data=d;}

        Shallow(int d){
            data=new int;
            *data=d;
        }

        Shallow(const Shallow &source):data(source.data){
            cout<<"In copy constructor"<<endl;
        }

        ~Shallow(){
            delete data;
            cout<<"In deconstructor"<<endl;
        }

};
void displayShallow(Shallow obj){
    cout<<obj.getData()<<endl;
}
int main(){
    Shallow obj1(100);
    displayShallow(obj1);

    obj1.setData(1000);
    Shallow obj2(obj1);

    cout<<"Hello World"<<endl;
    return 0;
}