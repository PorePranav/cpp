#include <iostream>
using namespace std;

int main(){
    // int *int_ptr;
    // int_ptr = new int;

    // cout<<"*int_ptr: "<<*int_ptr<<endl;
    // *int_ptr=100;
    // cout<<"*int_ptr: "<<*int_ptr<<endl;

    // delete int_ptr;

    int *arr_ptr = nullptr;
    int size;
    cout<<"How big do you want your array to be? ";
    cin>>size;


    arr_ptr=new int[size];
    int *ptr=arr_ptr;

    for(int i=0; i<size; i++){
        cout<<*arr_ptr<<" ";
        arr_ptr++;
    }
    cout<<endl;
    arr_ptr=ptr;

    for(int i=0; i<size; i++){
        cin>>*arr_ptr;
        arr_ptr++;
    }
    arr_ptr=ptr;

    for(int i=0; i<size; i++){
        cout<<*arr_ptr<<" ";
        arr_ptr++;
    }

    delete [] arr_ptr;
    return 0;
}