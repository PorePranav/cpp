#include<stdio.h>
class integer{
    private:
        int *ptr;
    public:
        void initialize();
        void store(int = 0);
        int print()const;
        void del();
};
inline void integer::initialize(){
    ptr = new int;
}
inline void integer::store(int x){
    *ptr = x;
}
inline int integer::print()const{
    return *ptr;
}
inline void integer::del(){
    delete ptr;
}

int main(){
    integer in;
    in.initialize();
    in.store(5);
    printf("%d" , in.print());
    in.del();

    return 0;
}