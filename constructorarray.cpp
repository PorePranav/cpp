#include<stdio.h>
class integer{
    private:
        int number;
    public:
        integer();
        ~integer();
        int getnum()const;
};
integer::integer(){
    number = 0;
    puts("In Constructor\n");
}
integer::~integer(){
    puts("In Deconstructor\n");
}
int integer::getnum()const{
    return number;
}
int main(){
    integer in[10];
    int i;
    printf("Inside Main\n");
    for(i=0;i<10;i++)
        printf("%d\n" , in[i].getnum());
    
    return 0;
}