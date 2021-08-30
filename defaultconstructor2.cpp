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
integer in3;
int main(){
    printf("In Main();\n");
    integer in1, in2;
    integer in[20];
    printf("Leaving Main();\n");
}