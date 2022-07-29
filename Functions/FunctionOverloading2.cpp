#include <iostream>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

int main(){
    vector<string> strings;

    strings.push_back("Pranav");
    strings.push_back("Rahul");
    strings.push_back("Pore");
    
    print(4);
    print('A');

    print(9.8);
    print(123.3F);
    
    print("Pranav");
    print("Pranav", "Pore");  
    print(strings);

    return 0;
}

void print(int num){
    cout<<"Printing int: "<<num<<endl;
}

void print(double num){
    cout<<"Printing double: "<<num<<endl;
}

void print(string s){
    cout<<"Printing string: "<<s<<endl;
}

void print(string s1, string s2){
    cout<<"Printing 2 strings: "<<s1<<" "<<s2<<endl;
}

void print(vector<string> stringVector){
    cout<<"Printing vector: "<<endl;
    for(string s: stringVector){
        cout<<s<<" ";
    }
    cout<<endl;
}