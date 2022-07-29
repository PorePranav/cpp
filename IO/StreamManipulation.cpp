#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double num {123456789.123456789};

    cout<<fixed;
    cout<<num<<endl;

    cout<<setprecision(3);
    cout<<num<<endl;
    return 0;
}