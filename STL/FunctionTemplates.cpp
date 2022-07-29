//Created by Pranav on 8th Apr 2022

#include <iostream>
#include <string>
using namespace std;

template <typename T>
T minNum(T a, T b){
    return (a < b) ? a : b;
}

template <typename T1, typename T2>
void func(T1 a, T2 b){
    cout<<a<<" "<<b<<endl;
}

template <typename T>
void swapFunc(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}
struct Person{
    string name;
    int age;
    bool operator<(const Person &rhs){
        return (this->age < rhs.age);
    }
};

ostream& operator<<(ostream &os, const Person &obj){
    os<<obj.name;
    return os;
}


int main(){
    Person p1 {"Curly", 50};
    Person p2 {"Moe", 80};

    Person p3 = minNum(p1, p2);

    cout<<p3.name<<" is younger"<<endl;
    cout<<minNum(2, 3)<<endl;

    func(10, "Person");
    func(p1, p2);

    int a {20}, b {30};
    cout<<"Before swap: "<<a<<" "<<b<<endl;
    swapFunc(a, b);
    cout<<"After swap: "<<a<<" "<<b<<endl;

    return 0;
}