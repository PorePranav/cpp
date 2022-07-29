#include<stdio.h>
class integer{
    private:
        int number;
    public:
        integer(int = 0);
        friend void print(const integer&);
};
integer::integer(int x) : number(x){
    printf("In constructor\n");
}
inline void print(const integer& inref){
    printf("number = %d\n",inref.number);
}
int main(){
    integer in = 1;

    print(in);
    
    return 0;
}