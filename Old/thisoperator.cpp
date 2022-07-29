#include<stdio.h>
class integer{
    private:
        int num;
    public:
        integer(int=0);
        int get()const;
        void increment(int);
};
inline integer::integer(int x) : num(x){
}
inline void integer::increment(int x){
    num = num + x;
}
inline int integer::get()const{
    return num;
}
int main(){
    integer in1(5);
    in1.increment(3);
    printf("%d\n" , in1.get());
}