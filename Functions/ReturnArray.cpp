#include <bits/stdc++.h>
using namespace std;
int* returnArray();

int main(){
    int* ptr=returnArray();
}

int* returnArray(){
    static int arr[5];

    for(int i=0; i<=4; i++){
        cout<<"Enter num "<<(i+1)<<endl;
        cin>>arr[i];
    }

    return arr;
}