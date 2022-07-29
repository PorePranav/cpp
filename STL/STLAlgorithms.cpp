//Created by Pranav on 11th Apr 2022
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> vec {3, 8, 1};
    auto loc = find(vec.begin(), vec.end(), 3);

    if(loc != vec.end())
        cout<<*loc<<endl;   

    return 0;
}