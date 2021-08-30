#include<iostream>
#include<string.h>

using namespace std;
class myString{
        char* name;
    public:
        myString(const char* = "\0");
        myString(const myString&);
        bool operator < (const myString&);
        bool operator == (const myString&);
        myString operator = (const myString&);
        void operator-();
        bool operator !=(const myString&);
        myString operator + (const myString&);
        ~myString();
        const char* getname()const;
};
myString::myString(const char* ptr){
    cout<<"In Constructor"<<endl;
    name = new char [strlen(ptr+1)];
    strcpy(name,ptr);
}
myString::myString(const myString& s){
    cout<<"In Copy Constructor"<<endl;
    name = new char[strlen(s.name+1)];
    strcpy(name,s.name);
}
myString::~myString(){
    cout<<"In Deconstructor"<<endl;
    delete [] name;
}
bool myString::operator==(const myString& s){
    if(!strcmp(name,s.name))
        return true;
    else    
        return false;
}
bool myString::operator<(const myString& s){
    if(strlen(name)<strlen(s.name))
        return true;
    else 
        return false;
}
bool myString::operator!=(const myString& s){
    if(!strcmp(name,s.name))
        return true;
    else 
        return false;
}
myString myString::operator+(const myString& s){
    myString temp;
    strcat(temp.name,s.name);
    strcat(temp.name,name);
    return temp;
}
// void myString::operator-(){
//     strrev(name);
// }
const char* myString::getname()const{
    return name;
}
int main(){
    char sname[1000];
    
    cout<<"Enter Name"<<endl;
    cin>>sname;

    myString s1(sname);

    cout<<"Enter Name"<<endl;
    cin>>sname;

    myString s2(sname);

    if(s1==s2)
        cout << "Both Strings are same" << endl;
    else    
        cout << "Both Strings are different" << endl;

    if(s1<s2)
        cout << s2.getname() << " is larger" << endl;
    else    
        cout << s1.getname() << " is larger" << endl;
    
    if(s1 != s2)
        cout << "Both Strings are same" << endl;
    else
        cout << "Both Strings are not the same" << endl;

    myString s3 = s1 + s2;

    cout << s3.getname() << endl;
    
   //-s3;
    cout<< s3.getname()<<endl;

    myString s4=s3;
    cout << s4.getname() << endl;
    
    return 0;
}