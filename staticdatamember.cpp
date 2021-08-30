#include<stdio.h>
class keep_count{
        static int count;
    public:
        keep_count();
        int print()const;
};
inline keep_count::keep_count(){
   ++count; 
}
inline int keep_count::print()const{
    return count;
}
int main(){
    keep_count kc1,kc2,kc3;
    printf("%d\n", kc1.print());

    return 0;
}