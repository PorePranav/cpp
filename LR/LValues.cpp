#include <iostream>
using namespace std;

int square(const int&);
int main(){
    int num;
    cin>>num;
    cout<<square(num)<<endl;
    cout<<square(5)<<endl;

    return 0;
}
int square(const int &num){
    return num*num;
}