#include<stdio.h>
class integer{
    private:
        int number;
    public:
        void store(int);
        int print(void)const;
};
void integer::store(int x){
    number = x;
}
int integer::print()const{
    return number;
}
int main(){
    integer in;
    in.store(5);
    printf("%d",in.print());
    return 0;

}