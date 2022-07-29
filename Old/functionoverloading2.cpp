#include<stdio.h>
class integer{
    private:
        int number;
    public:
        integer(int = 0);
        void assign(const integer&);
        void print()const;
};
integer::integer(int x) : number(x){
   
}
void integer::assign(const integer& i){
    number = i.number;
}
inline void integer::print()const{
    printf("The number is %d\n",number);
}
int main(){
    integer in(5);
    in.assign(3);
    in.print();

    return 0;
}