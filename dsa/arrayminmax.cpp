#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]>maxNo)
            maxNo=arr[i];
        if(arr[i]<minNo)
            minNo=arr[i];
    }
    cout<<"The max no is "<<maxNo<<" "<< "the min no is "<< minNo;
}