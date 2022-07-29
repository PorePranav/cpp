//Created by Pranav on 11th Apr 2022
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class squareFunctor{
    public:
        void operator()(int x){
            cout<<x*x<<" ";
        }
};

void squareSq(int x){
    cout<<x*x<<" ";
}

int main(){
    squareFunctor square;
    vector<int> vec {1, 2, 3, 4};

    for_each(vec.begin(), vec.end(), square);
    cout<<endl;

    for_each(vec.begin(), vec.end(), squareSq);
    cout<<endl;

    for_each(vec.begin(), vec.end(), [] (int x) {cout<<x*x<<" ";});
}