#include<stdio.h>
class integer{
    private:
        int number;
    private:
        void store(int = 0);
        int getNumber()const;
        void copy(const integer&);
};
inline void integer::store(int x){
    number = x;
}
inline int integer::getNumber()const{
    return number;
}
inline void integer::copy(const integer& inref){
    number = inref.number;
}
int main(){
    integer in1,in2;
    in1.store(5);
    in2.copy(in1);
    printf("in1 = %d\n", in1.getNumber());
    printf("in1 = %d\n", in1.getNumber());
    return 0;

}