#include<stdio.h>

class integer{
    private:
        int number;
    public:
        integer(int = 0);
        ~integer();
        int print()const;
        friend integer add(const integer&, const integer&);
};
integer::integer(int x){
    printf("In Constructor\n");
    x = number;
}
int integer::print()const{
    return number;
}
integer add(const integer& a, const integer& b){
    return a.number + b.number; 
}
// integer::~integer(){
//     printf("In Deconstructor\n");
// }
int main(){
    integer in1(5), in2(2), in3;
    in3 = add(in1,in2);
    printf("The addition of %d and %d is %d" , in1.print(),in2.print(),in3.print());

    return 0;
}