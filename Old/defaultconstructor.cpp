#include<stdio.h>
class integer{
        int num;
    public:
        integer();
        ~integer();
        int getnum() const;
};
integer::integer(){
    num=0;
    puts("In Constructor");
}
integer::~integer(){
    puts("In Deconstuctor");
}
int main(){
    printf("In Main();\n");
    integer in1, in2;
    printf("Leaving Main();\n");
}