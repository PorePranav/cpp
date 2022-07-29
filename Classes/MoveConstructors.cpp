#include <iostream>
#include <vector>
using namespace std;

class Move{
    private:
        int *data;
    public:
        void setData(int);
        int getData(){return *data;}
        Move(int);
        Move(Move&&);
        ~Move();
};
Move::Move(Move &&source):data(source.data){
    cout<<"In move constructor for: "<<*(source.data)<<endl;
    source.data=nullptr;
}
Move::Move(int d){
    cout<<"In constructor for: "<<d<<endl;
    data = new int;
    *data = d;
}
void Move::setData(int d){
    *data=d;
}
Move::~Move(){
    if(data!=nullptr)
        cout<<"In deconstructor for: "<<*data<<endl;
    else
        cout<<"In destructor for: nullptr"<<endl;
    delete data;
}
int main(){
    vector<Move> vec;
    vec.push_back(Move{10});
    vec.push_back(Move{20});

    return 0;
}