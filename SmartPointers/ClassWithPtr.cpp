#include <iostream>
#include <memory>
using namespace std;

class Test{
    private:
        int data;
    public:
        Test() : data{0} {cout<<"Test constructor ("<<data<<")"<<endl;}
        Test(int data) : data{data} {cout<<"Test constructor ("<<data<<")"<<endl;}
        int getData(){return this->data;}
        ~Test(){cout<<"Test destructor ("<<data<<")"<<endl;}
};
int main(){
    Test *ptr = new Test(100);
    cout<<"*ptr data: "<<ptr->getData()<<endl;

    unique_ptr<Test> unqPtr = make_unique<Test>(1000);
    cout<<"unique_ptr data: "<<unqPtr->getData()<<endl;

    unique_ptr<Test> unqPtr2;
    unqPtr2 = move(unqPtr);

    if(!unqPtr)
        cout<<"unqPtr is nullptr"<<endl;
    
    return 0;
}