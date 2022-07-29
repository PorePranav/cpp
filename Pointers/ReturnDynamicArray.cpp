#include <iostream>
using namespace std;
int* allocate(size_t , int);
int main(){
    int *ptr = allocate(5, 5);

    for(int i=0; i<5; i++){
        cout<<*ptr++<<" ";
    }

    delete [] ptr;
    cout<<endl;
}

int* allocate(size_t size, int init_value){
    int *array = nullptr;
    array = new int[5];

    for(int i=0; i<5; i++){
        *(array+i)=init_value;
    }

    return array; 
}