#include <iostream>
#include <memory>
#include <vector>

using namespace std;
void printVector(vector<unique_ptr<int>>&);
int main(){
    vector<unique_ptr<int>> vec;

    unique_ptr<int> ptr = make_unique<int>(100);
    vec.push_back(move(ptr));
    
    printVector(vec);
    return 0;
}

void printVector(vector<unique_ptr<int>> &vec){
    for(auto &num : vec)
        cout<<*num<<endl;
}
