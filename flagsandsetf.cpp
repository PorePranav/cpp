#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int x = 5;
    float y = 3.4f;
    
    cout.setf(ios::showpos);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    cout.unsetf(ios::showpos);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

}