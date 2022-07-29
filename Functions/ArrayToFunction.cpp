#include <iostream>
using namespace std;

void print_array(const int [], size_t);
void set_array(int [], size_t, int);

int main(){
    int my_scores[] = {100, 99, 98, 97, 96};
    
    print_array(my_scores, 5);
    set_array(my_scores, 5, 100);
    print_array(my_scores, 5);

    return 0;
}

void print_array(const int my_numbers[], size_t size){
    for(size_t i=0; i<size; i++){
        cout<<my_numbers[i]<<" ";
    }
    cout<<endl;
    for(size_t i=0; i<size; i++){
        cout<<&my_numbers[i]<<" ";
    }
    cout<<endl;
}

void set_array(int arr[], size_t size, int value){
    for(size_t i=0; i<size; i++){
        arr[i]=value;
    }
}