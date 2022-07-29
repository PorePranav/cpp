#include <iostream>
#define MAX(a, b) ((a > b) ? a : b)
using namespace std;

int main(){
    cout<<MAX(10, 20)<<endl;
    cout<<MAX(2.4, 8.1)<<endl;
    cout<<MAX('A', 'C')<<endl;

    return 0;
}

