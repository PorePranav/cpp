#include <iostream>
using namespace std;

int main(){
    //variable_type *pointer_name {null_ptr};
    int num {5};
    cout<<"Value of num is: "<<num<<endl;
    cout<<"Size of num is: "<<sizeof(num)<<" bytes"<<endl;
    cout<<"Address of num is: "<<&num<<endl;

    int *ptr {&num};
    cout<<"Value of ptr is: "<<ptr<<endl;
    cout<<"Address of ptr is: "<<&ptr<<endl;
    cout<<"Size of ptr is: "<<sizeof(ptr)<<endl;
    
    ptr=nullptr;
    cout<<"Value of ptr is: "<<ptr<<endl;

    return 0;
}