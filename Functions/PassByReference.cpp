#include <bits/stdc++.h>
using namespace std;

inline void printVector(const vector<string> &);

int main(){
    vector<string> names {"Pranav", "Rahul", "Pore"};
    printVector(names);
    printVector(names);
    return 0;
}

inline void printVector(const vector<string> &a){
    for(auto name : a){
        cout<<name<<" ";
    }
    cout<<endl;
}