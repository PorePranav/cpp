#include <iostream>
using namespace std;

int main(){
    int kilometers {}, liters {};
    double kilometers_per_liter {};

    cout<<"Enter kilometers: ";
    cin>>kilometers;

    cout<<"Enter liters: ";
    cin>>liters;

    try{    
        if(liters == 0)
            throw 0;
        kilometers_per_liter = static_cast<double>(kilometers) / liters;
        cout<<"Result: "<<kilometers_per_liter<<endl;
    }
    catch(int &ex){
        cerr<<"Sorry, can't divide by zero"<<endl;
    }

    cout<<"Bye"<<endl;
    return 0;
}