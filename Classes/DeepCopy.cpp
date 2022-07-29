#include <iostream>
using namespace std;
class Deep{
    private:
        int* data;
    public:
        Deep(int d);
        Deep(const Deep &source);
        ~Deep();
        int getData(){return *data;}
        void setData(int d){*data=d;}
};
Deep::Deep(int d){
    data=new int;
    *data=d;
}
Deep::~Deep(){
    delete data;
    cout<<"Destructor freeing data"<<endl;
}
Deep::Deep(const Deep &source):Deep(*source.data){
    cout<<"Copy constructor - deep"<<endl;
}
void displayShallow(Deep obj){
    cout<<obj.getData()<<endl;
}
int main(){
    Deep obj1(100);
    displayShallow(obj1);

    obj1.setData(1000);
    Deep obj2(obj1);

    cout<<"Hello World"<<endl;
    return 0;
}