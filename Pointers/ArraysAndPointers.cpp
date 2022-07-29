#include <iostream>
using namespace std;

int main(){
    int scores [] {100, 200, 300};
    // cout<<scores<<endl;
    // cout<<*scores<<endl;

    int *arr_ptr=scores;

    // cout<<scores<<endl;
    // cout<<*scores<<endl;

    for(int i=0; i<3; i++){
        cout<<*arr_ptr++<<endl;
    }
    return 0;
}