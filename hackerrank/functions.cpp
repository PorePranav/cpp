#include<iostream>
using namespace std;
int max_of_four(int a, int b, int c, int d){
    int max=0;
    int arr[4]={a,b,c,d};
    for(int i=1; i<=4; i++){
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}
int main(){
    cout<<max_of_four(1,2,3,4);
}
