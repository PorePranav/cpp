#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char first_name[20] = {};
    char last_name[20] = {};
    char full_name[50] = {};
    char temp[50] = {};
    
    cout<<"Please enter your first name:"<<endl;
    cin>>first_name;

    cout<<"Please enter your last name:"<<endl;
    cin>>last_name;

    cout<<first_name<<" "<<last_name<<endl;

    cout<<first_name<<" has "<<strlen(first_name)<<" characters"<<endl;
    cout<<last_name<<" has "<<strlen(last_name)<<" characters"<<endl;

    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    cout<<"Your full name is: "<<full_name<<endl;

    cout<<"Enter your full name: "<<endl;
    cin.ignore();
    cin.getline(full_name, 50);
    cout<<"Your full name is: " << full_name << endl;

}
 
