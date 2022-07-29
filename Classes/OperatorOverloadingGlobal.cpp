#include <iostream>
#include <string.h>
using namespace std;
class myString{
    friend bool operator==(const myString&, const myString&);
    friend myString operator-(const myString&);
    friend myString operator+(const myString&, const myString&);

    private:
        char *str;
    public:
        myString();
        myString(const char*);
        myString(const myString&);
        myString(const myString&&);
        ~myString();

        myString &operator=(const myString&);
        myString &operator=(myString &&);

        void display() const;
        int getLength() const;
        const char* getStr() const;
         
};
void myString::display() const{
    cout<<str<<" : "<<getLength()<<endl;
}
int myString::getLength()const{return strlen(str);}
const char* myString::getStr()const{return str;}

bool operator==(const myString &lhs, const myString &rhs){
    return(strcmp(lhs.str, rhs.str)==0);
}
myString operator-(const myString &obj){
    char *buff = new char[strlen(obj.str)+1];
    strcpy(buff, obj.str);
    for(size_t i {0}; i<strlen(buff); i++)
        buff[i]=tolower(buff[i]);
    myString temp {buff};
    delete [] buff;
    return temp;
}
myString operator+(const myString &lhs, const myString &rhs){
    char *buff = new char[strlen(lhs.str)+strlen(rhs.str)+1];
    strcpy(buff, lhs.str);
    strcat(buff, rhs.str);

    myString temp {buff};
    delete [] buff;
    return temp;
}
myString::myString(){
    str = new char[1];
    str[1] = '\0';
}
myString::myString(const char* input){
    str = new char[strlen(input)];
    strcpy(str, input);
}
myString::myString(const myString &source){

}
myString::myString(const myString &&source):myString(source.str){
    source.str = nullptr;
}
int main(){

}