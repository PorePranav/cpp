#include <bits/stdc++.h>

using namespace std;
void swap(int &, int &);
int main(){
    int x {10}, y {20};
    cout<<"x: "<<x<<" y: "<<y<<endl;

    swap(x, y);
    cout<<"x: "<<x<<" y: "<<y<<endl;
}
void swap(int &x, int &y){
    int temp = x;
    x=y;
    y=temp;
}