#include<stdio.h>
#include<string.h>
#define TRUE 1
#define FALSE 0
class string{
        char name[50];
    public:
        string(const char* = " ");
        bool operator == (const string&);
        const char* print() const;
};
string::string(const char* stri){
    strcpy(name,stri);
}
bool string::operator == (const string& S){
    if(!strcmp(name,S.name))
        return TRUE;
    else 
        return FALSE;
}
const char* string::print()const{
    return name;
}
int main(){
    string S1("Pranav");
    string S2("Pranav");

    if (S1==S2)
        printf("Both strings are the same\n");
    else    
        printf("The strings aren't the same\n");

    return 0;
    
}