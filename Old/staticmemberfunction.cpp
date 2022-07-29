#include<stdio.h>
class keep_count{
    private:
        static int counter;
    public:
        keep_count();
        static int print();
};
int keep_count::counter = 0;
keep_count::keep_count(){
    ++counter;
}
int keep_count::print(){
    return counter;
}
int main(){
    printf("%d\n" , keep_count::print());
    keep_count kc1,kc2,kc3;
    printf("%d\n" , keep_count::print());

    return 0;    
}