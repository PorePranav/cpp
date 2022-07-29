#include <iostream>
using namespace std;

inline int factorial(int num);

int main(){
    int number;
    
    cout<<"Enter a number whose factorial is to be calculated"<<endl;
    cin>>number;

    cout<<"Factorial of "<<number<<" is: "<<factorial(number)<<endl;

}

inline int factorial(int num){
    if(num==1 || num==0)
        return 1;
    else    
        return num*factorial(num-1);
}