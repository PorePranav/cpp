#include<stdio.h>
#include<math.h>
class integer{
    private:
        int number;
    public:
        void store(int = 1);
        int get() const;
};
inline void integer::store(int x){
    number = x;
}
inline int integer::get()const{
    return number;
}
class exponent{
    private:
        integer in1,in2;
    public:
        void store(int = 1 , int = 1);
        int get1()const;
        int get2()const;
        double power()const;
};
inline int exponent::get1()const{
    return in1.get();
}
inline int exponent::get2()const{
    return in2.get();
}
inline double exponent::power()const{
    return pow(get1(),get2());
}
inline void exponent::store(int n1, int n2){
    in1.store(n1);
    in2.store(n2);
}
int main(){
    int base,power;
    printf("Enter the base\t");
    scanf("%d" , &base); 
    printf("Enter the power\t");
    scanf("%d" , &power); 
    exponent ex;
    ex.store(base,power);
    printf("%d raised to %d is %f\n", ex.get1(), ex.get2(), ex.power()); 
    return 0;
}