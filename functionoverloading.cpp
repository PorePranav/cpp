#include<stdio.h>
class integer{
    public:
        void print(double){
            printf("Double ...\n");
        }
        void print(void*){
            printf("void*\n");
        }
};
int main(){
    integer in;
    int number = 5;
    char name[]="Polymorphism";

    in.print(number);
    in.print(name);
    in.print(&number);
}