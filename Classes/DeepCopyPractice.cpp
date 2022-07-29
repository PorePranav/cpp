#include <iostream>
using namespace std;
class Deep{
    private:
        int* data;
    public:
        int getData(){return *data;}
        void setData(int d){*data=d;}
        Deep(int d){
            data=new int;
            *data=d;
        }
        Deep(const Deep &source):Deep(*source.data){}
        ~Deep(){
            cout<<"In deconstructor"<<endl;
            delete data;
        }

};
int main(){

}