#include<stdio.h>
#include<string.h>
class student{
    public:
        int roll_no;
    private:
        student();
        student(int);
        ~student();
        int get_rollno()const;
        void copyinstance(const student&);
};
inline student::student(int x){
    roll_no = x;
}
inline student::student(){

}
inline student::~student(){

}
inline int student::roll_no()const{
    return roll_no;
}
inline void student::copyinstance(const student& s){
    roll_no = s.roll_no;
}
int main(){
    student sayema;
    sayema.copyinstance(102);
    printf("Roll No. = %d\n", sayema.get_rollno();)
}
