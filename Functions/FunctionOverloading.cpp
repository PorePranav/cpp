#include <iostream>

using namespace std;

int add_numbers(int, int);
double add_numbers(double, double);

int main(){
    cout<<add_numbers(1, 8)<<endl;
    cout<<add_numbers(9.25, 8.75)<<endl;
    return 0;
}

int add_numbers(int a, int b){
    return a+b;
}

double add_numbers(double a, double b){
    return a+b;
}