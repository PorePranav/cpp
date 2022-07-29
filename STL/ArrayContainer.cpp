//Created by Pranav on 12th Apr 2022
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int main(){ 
    array<int, 5> arr1 {5, 4, 21, 1, 69};

    for(int num : arr1)
        cout<<num<<" ";
    cout<<endl;

    sort(arr1.begin(), arr1.end());
    cout<<"Array1 after sorting: ";
    for(auto num : arr1)
        cout<<num<<" ";
    cout<<endl;

    array<string, 3> arr2 {"Pranav", string("Rahul"), "Aashish"};
    for(string num : arr2)
        cout<<num<<" ";
    cout<<endl;

    
    array<int, arr1.size()> arr3 = arr1;
    for(int num : arr3)
        cout<<num<<" ";
    cout<<endl;

    return 0; 
}