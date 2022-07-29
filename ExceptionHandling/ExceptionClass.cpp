#include <iostream>
#include <string>
using namespace std;
float calcAverage(int, int);
class DivideByZeroException{};
class NegativeValeException{};
int main(){
    int sum{}, total{};
    double average{};
    cout<<"Enter sum and total: ";
    cin>>sum>>total;
    try{
        average = calcAverage(sum, total);
        cout<<"Average: "<<average<<endl;
    }
    catch(const DivideByZeroException &ex){
        cerr<<"Sorry, can't divide by zero"<<endl;
    }
    catch(const NegativeValeException &ex){
        cerr<<"Sorry, one of your values is negative"<<endl;
    }
}
float calcAverage(int sum, int total){
    if(total == 0)
        throw DivideByZeroException();
    else if(sum<0 || total<0)
        throw NegativeValeException();
    return static_cast<double> (sum)/total;
}