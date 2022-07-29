#include<stdio.h>
class integer{
    private:
        int number;
    public:
        void store(int);
        int print();

};
void integer::store(int x){
    number = x;
}
int integer::print(){
    return number;
}
int main(){
    integer* ptr = new integer;
    if(ptr == NULL)
        printf("Error allocating memory on the heap\n");
    else{
        ptr->store(5);
        printf("%d\n" , ptr->print());
        delete ptr;
    }
    return 0;
}