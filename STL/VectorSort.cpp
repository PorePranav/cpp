//Created by Pranav on 8th Apr 2022
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> vec {1, 5, 3};
    int sum {};
    sort(vec.begin(), vec.end());

    for(auto elem : vec)
        cout<<elem<<" ";
    
    cout<<endl;

    reverse(vec.begin(), vec.end());
    for(auto elem : vec)
        cout<<elem<<" ";
    
    cout<<endl;

    // sum = accumulate(vec.begin(), vec.end(), 0);
    // cout<<"Sum: "<<sum<<endl;
    return 0;
}