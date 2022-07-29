#include <iostream>
using namespace std;
int* largest_ptr(int*, int*);
int main(){
    int a=100, b=200;
    int *largest=largest_ptr(&a, &b);

    cout<<*largest<<endl;

}

int* largest_ptr(int *a, int *b){
    int *new_storage = nullptr;
    
    if(*a>*b)
        new_storage=a;
    else
        new_storage=b;
    
    return new_storage;
}