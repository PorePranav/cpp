#include<stdio.h>
#include<string.h>
class student{
        int roll_no;
        float percentage;
        char *name;
    public:
        student(int = 0, float = 0.0f, const char* = " ");
        ~student();
        int getrollno()const;
        float getpercentage()const;
        const char* getname()const;
};
inline student::student(int rn , int pr, char* nm){
    printf("In Constructor");
    roll_no = rn;
    percentage = pr;
    name = new char[strlen(nm)+1];
    strcpy(name,nm);
}
inline student::~student(){
    printf("In Deconstructor\n");
    delete []name;
}
int main(){
    student sayema(101,86.22f,"Sayema");
    student pranav(102, 95.22f, "Pranav");
    return 0;
}