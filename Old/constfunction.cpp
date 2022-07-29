#include<stdio.h>
class integer{
    private:
        int number;
    public:
        void store(int);
        int print()const;
};
inline void integer::store(int x){
    number = x;
}
inline int integer::print()const{
    return number;
}
int main(){
    integer in;
    in.store(5);

    printf("%d" , in.print());
    return 0;
}