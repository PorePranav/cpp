#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    // int score {100};
    // int *score_ptr {&score};

    // cout<<*score_ptr<<endl;
    
    // *score_ptr=200;
    // cout<<*score_ptr<<endl;
    // cout<<score<<endl;

    string name {"Pranav"};
    string *name_ptr {&name};

    cout<<*name_ptr<<endl;

    *name_ptr="Rahul";
    cout<<*name_ptr<<endl;

    vector<string> stooges {"Larry", "Moe", "Curly"};
    vector<string> *vector_ptr {nullptr};

    vector_ptr=&stooges;

    cout<<"Stooges: ";
    for(int i=0; i<(*vector_ptr).size(); i++){
        cout<<(*vector_ptr).at(i)<<" ";
    }
    cout<<endl;

    return 0;
}