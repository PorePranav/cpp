#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};
    string s6 {s1, 0, 3};
    string s7 (10, 'X');

    // cout<<s0<<endl;
    // cout<<s0.length()<<endl;

    // cout<<s6<<endl;

    //Initialization
    // cout<<"\nInitialization\n"<<endl;
    // cout<<"s1 is initialized to "<<s1<<endl;
    // cout<<"s2 is initialized to "<<s2<<endl;
    // cout<<"s3 is initialized to "<<s3<<endl;
    // cout<<"s4 is initialized to "<<s4<<endl;
    // cout<<"s5 is initialized to "<<s5<<endl;
    // cout<<"s6 is initialized to "<<s6<<endl;
    // cout<<"s7 is initialized to "<<s7<<endl;

    //Comparison
    // cout<<"\nComparison\n"<<endl;
    // cout<<boolalpha;
    // cout<<s1<<" == "<<s5<<" : "<<(s1==s5)<<endl;
    // cout<<s1<<" == "<<s2<<" : "<<(s1==s2)<<endl;
    // cout<<s1<<" != "<<s2<<" : "<<(s1!=s2)<<endl;
    // cout<<s1<<" < "<<s2<<" : "<<(s1<s2)<<endl;
    // cout<<s2<<" > "<<s1<<" : "<<(s2>s1)<<endl;
    // cout<<s4<<" < "<<s5<<" : "<<(s4<s5)<<endl;
    // cout<<s1<<" == "<<"Apple"<<" : "<<(s1=="Apple")<<endl;

    //Assignment
    // cout<<"\nAssignment\n"<<endl;
    // s1="Watermelon";
    // cout<<"s1 is now: "<<s1<<endl;
    // s2 = s1;
    // cout<<"s2 is now: "<<s2<<endl;

    // s3 = "Pranav";
    // cout<<s3<<endl;

    // s3[0]='R';
    // cout<<"s3's first letter changed to R: "<<s3<<endl;
    // s3.at(0) = 'P';
    // cout<<"s3's first letter changed to P: "<<s3<<endl; 

    //Concatenation
    // cout<<"\nConcatenation\n"<<endl;

    // s3 = s5 + " and " + s2 + " juice";
    // cout<<"s3 is now: "<<s3<<endl;

    // s3 = "Nice " + "cold " + s5 + " juice."; //Illegal
    // cout<<s3<<endl;

    //Looping
    // cout<<"Looping\n"<<endl;
    // s1 = "Apple";

    // for(size_t i {0}; i < s1.length(); i++){
    //     cout<<s1.at(i);
    // }
    // cout<<endl;

    // for(char c: s1){
    //     cout<<c;
    // }
    // cout<<endl;

    //Substring
    // cout<<"\nSubstring"<<"\n-----------------------------"<<endl;
    // s1 = "This is a string";

    // cout<<s1.substr(0, 4)<<endl;
    // cout<<s1.substr(5, 2)<<endl;
    // cout<<s1.substr(10, 6)<<endl;

    //Erase

    // cout<<"\nErase"<<"\n-----------------------------"<<endl;

    // s1 = "This is a string";
    // s1.erase(0, 5);
    // cout<<"s1 is now: "<<s1<<endl;

    //getline
    // cout<<"\ngetline"<<"\n-----------------------------"<<endl;

    // string full_name {};
    // getline(cin, full_name);

    // cout<<"Your full name is: "<<full_name<<endl;

    //Find
    cout<<"\nFind"<<"\n-----------------------------"<<endl;

    s1 = "The secret word is Pranav";
    string word {};
    
    cout<<"Enter the word to find:";
    getline(cin, word);

    size_t position = s1.find(word);
    if(position != string::npos){
        cout<<"Found "<< word << " at position: "<<position<<endl;
    }
    else{
        cout<<"Sorry, "<< word << " wasn't found in the string"<<endl;
    }

    cout<<endl;
    return 0;
}