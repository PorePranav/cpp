//Created by Pranav on 8th Apr 2022
#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename T>
class Item{
    private:
        string name;
        T value;
    public:
        Item(string name, T value) : name(name), value(value) {}
        string getName(){return name;}
        T getValue() {return value;}
};

template <typename T1, typename T2>
struct myPair{
    T1 first;
    T2 second;
};

int main(){
    Item<int> item1 {"Pranav", 100};
    cout<<item1.getName()<<" "<<item1.getValue()<<endl;

    Item<string> item2 {"Pranav", "Pore"};
    cout<<item2.getName()<<" "<<item2.getValue()<<endl;

    Item<Item<string>> item3 {"Pranav", {"Rahul", "Pore"}};
    cout<<item3.getName()<<" "<<item3.getValue().getName()<<" "<<item3.getValue().getValue()<<endl;

    vector<Item<double>> vec {};

    vec.push_back(Item<double> {"Pranav", 100.0});
    vec.push_back(Item<double> {"Aashish", 98.77});
    vec.push_back(Item<double> {"Rahul", 99.99});

    for(auto var : vec){
        cout<<var.getName()<<" "<<var.getValue()<<endl;
    }

    myPair<int, double> pair1{123, 13.6};
    cout<<pair1.first<<" "<<pair1.second<<endl;

    myPair<string, double> pair2 {"Pranav", 199.98};
    cout<<pair2.first<<" "<<pair2.second<<endl;
    
    return 0;
}