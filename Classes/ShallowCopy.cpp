#include <iostream>
using namespace std;
class Shallow{
    private:
        int* data;
    public:
        void setData(int d){
            *data=d;
        }
        int getData(){
            return *data;
        }
        Shallow(int d){
            data = new int;
            *data=d;
        }
        Shallow(const Shallow &source){
            data=source.data;
            cout<<"Copy constructor - shallow"<<endl;
        }
        ~Shallow(){
            delete data;
            cout<<"Destructor freeing data"<<endl;
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