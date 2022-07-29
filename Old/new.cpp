#include<stdio.h>
class student{
    private:
        float per;
    public:
        void getper( int );
        float returnper()const;
};
inline void student::getper(int x){
    per = x;
} 
inline float student::returnper(){
    return per;
}
main(){
    student s1;
    s1.getper(95.02);
    printf("The percentage is : %d " , s1.returnper() );

}