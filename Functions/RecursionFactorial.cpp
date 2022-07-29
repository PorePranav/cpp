#include <iostream>
using namespace std;
int factorial(int);

int main(){
    int num;
    cout<<"Enter the number whose factorial is to be calculated: "<<endl;
    cin>>num;

    cout<<"Factorial of "<<num<<" is: "<<factorial(num)<<endl;
    return 0;
}
int factorial(int num){
    if(num==0)
        return 1;
    else
        return num*factorial(num-1);
}