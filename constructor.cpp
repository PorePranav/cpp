#include<stdio.h>
class integer{
    private:
        int number;
    public:
        integer();
        ~integer();
        int getnum()const;
};
integer::integer(){
    number = 0;
    puts("In Constructor\n");
}
integer::~integer(){
    puts("In Deconstructor\n");
}
int integer::getnum()const{
    return number;
}
int main(){
    integer in1,in2;

    printf("Inside Main\n");
    printf("%d\n" , in1.getnum());
    printf("%d\n", in2.getnum());
    return 0;
}