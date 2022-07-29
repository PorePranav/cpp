#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int x = 65;

    cout.setf(ios::showbase);

    cout << "Decimal : " << x << endl;

    cout.setf(ios::oct , ios::basefield);
    cout << "Octal : " << x << endl;

    cout.setf(ios::hex, ios::basefield);
    cout << "Hexadecimal : " << x << endl;


    return 0;
}