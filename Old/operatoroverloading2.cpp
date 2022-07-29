#include<iostream>
using namespace std;
class Complex{
    private:
        int real,image;
    public:
        Complex(){
            real = 0;
            image = 0;
        }
        Complex(int r, int i){
            real = r;
            image = i;
        }
        void print(){
            cout << real << "+" << image <<"i" << endl;
        }
        //operator overloading
        Complex operator + (Complex c){
            Complex temp;
            temp.real = real+c.real;
            temp.image = image+ c.image;
            return temp;
    }
};
int main(){
    
    Complex c1(5,4);
    Complex c2(2,5);
    Complex c3;
    c3 = c1 + c2;
    c3.print();
    return 0;
}