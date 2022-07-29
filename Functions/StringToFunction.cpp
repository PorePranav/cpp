#include <bits/stdc++.h>

using namespace std;

void display (char *);
void display (string);

int main(){
    string str1;
    char str2[100];

    cout<<"Enter a string"<<endl;
    getline(cin, str1);

    cout<<"Enter another string"<<endl;
    cin.get(str2, 100, '\n');

    display(str1);
    display(str2);

    return 0;
}

void display(char s[]){
    cout<<"Entered char array is: "<<s<<endl;
}

void display(string s){
    cout<<"Enter string is: "<<s<<endl;
}