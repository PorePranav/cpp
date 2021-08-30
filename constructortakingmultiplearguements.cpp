#include<stdio.h>

class student{
    private:
        int roll_no;
        double percentage;
    public:
        student();
        student(int,double);
        ~student();
        int get_rollno()const;
        double get_percentage()const;
}; 
student::student(){

}
student::student(int x, double y){
    roll_no = x;
    percentage = y;
    puts("In Constructor\n");
}
student::~student(){
    puts("In Deconstructor\n");
}
double student::get_percentage()const{
    return percentage;
}
int student::get_rollno()const{
    return roll_no;
}
int main(){
    puts("In Main\n");
    student sayema(101, 97.8);
    student salil(102,95.2);
    printf("Sayema's Roll.no is %d\n", sayema.get_rollno());
    printf("Salil's Roll.no is %d\n", salil.get_rollno());
    printf("Sayema's percentage is %lf\n", sayema.get_percentage());
    printf("Salil's percentage is %lf\n", salil.get_percentage());
    puts("Leaving Main\n");
}