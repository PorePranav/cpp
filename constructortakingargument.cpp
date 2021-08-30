#include<stdio.h>

class student{
    private:
        int roll_no;
    public:
        student(int);
        int get_rollno()const;
}; 
student::student(int x){//constructor taking one argument
    roll_no = x;
}
int student::get_rollno()const{
    return roll_no;
}
int main(){
    student sayema(101);
    printf("Sayema's Roll.no is %d", sayema.get_rollno());
}