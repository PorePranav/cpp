#include<iostream>
using namespace std;
class Time{
    private:
        int hour;
        int minutes;
        int seconds;
    public:
        Time();
        Time(const int h, const int m, const int s);
        void print();
        Time operator+(const Time& s);    
};
Time::Time(){
            hour = 0;
            minutes = 0;
            seconds = 0;
        }
Time::Time(const int h, const int m, const int s){
            hour = h;
            minutes = m;
            seconds = s;
        }
void Time::print(){
            cout<<"Time is: "<< hour << minutes << seconds << endl;
        }
Time Time::operator+(const Time& s){
    Time temp;
    temp.hour = hour + s.hour;
    temp.minutes = minutes + s.minutes;
    temp.seconds = seconds + s.seconds;
    return temp;
}
int main(){
    Time t1(2,5,8);
    Time t2(2,5,9);
    Time t3;
    t3 = t1 + t2;
    t3.print();
    return 0;
}