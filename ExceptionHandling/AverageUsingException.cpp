#include <iostream>
#include <string>
using namespace std;
int calcAverage(int, int);

int main(){
    int sum{}, total{};
    double average{};
    cout<<"Enter sum and total: ";
    cin>>sum>>total;
    try{
        average = calcAverage(sum, total);
        cout<<"Average: "<<average<<endl;
    }
    catch(int &ex){
        cerr<<"Sorry, can't divide by zero"<<endl;
    }
    catch(string &ex){
        cerr<<ex<<endl;
    }
}
int calcAverage(int sum, int total){
    if(total == 0)
        throw 0;
    else if(sum<0 || total<0)
        throw string{"Negative value error"};
    return static_cast<double> (sum)/total;
}