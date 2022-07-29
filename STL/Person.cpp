//Created by Pranav on 11th Apr 2022
#include <iostream> 
#include <vector>
#include <list>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;

class Person{
    private:
        string name;
        int age;
    public:
        Person() = default;
        Person(string name, int age) : name(name), age(age) {}
        bool operator<(const Person &obj) const {
            return this->age < obj.age;
        }
        bool operator==(const Person &obj) const{
            return (this->name == obj.name && this->age == obj.age);
        }
};

void findTest(){
    cout<<"========================="<<endl;
    vector<int> vec {1, 2, 3, 4, 5};
    auto loc = find(vec.begin(), vec.end(), 7);

    if(loc != vec.end())
        cout<<"Found the number "<<*loc<<endl;
    else    
        cout<<"Couldn't find the number"<<endl;

    vector<Person> players = {
        {"Larry", 18},
        {"Moe", 20},
        {"Curly", 21}
    };

    auto loc1 = find(players.begin(), players.end(), Person("Ronaldo", 18));
    if(loc1 != players.end())
        cout<<"Found player Moe "<<endl;
    else
        cout<<"Couldn't find the player "<<endl;
}

void countTest(){
    cout<<"========================="<<endl;

    vector<int> vec {1, 2, 3, 4, 5, 1, 2, 1};
    int num = count(vec.begin(), vec.end(), 10);
    cout<<num<<" occurences found"<<endl;
}

void countIfTest(){
    vector<int> vec {1, 2, 3, 4, 5, 1, 2, 1, 100};
    int num = count_if(vec.begin(), vec.end(), [] (int x) {return x % 2 == 0;});
    cout<<num<<" even numbers found"<<endl;

    num = count_if(vec.begin(), vec.end(), [] (int x) {return x % 2 != 0;});
    cout<<num<<" odd numbers found"<<endl;

    num = count_if(vec.begin(), vec.end(), [](int x){return x >= 5;});
    cout<<num<<" numbers greater than or equal to 5"<<endl;
}

void replaceTest(){
    cout<<"=========================="<<endl;
    vector<int> vec {1, 2, 3, 4, 5, 1, 2, 1};
    for(auto i : vec)   
        cout<<i<<" ";
    cout<<endl;

    replace(vec.begin(), vec.end(), 1, 100);
    for(auto i : vec)   
        cout<<i<<" ";
    cout<<endl;
}

void allOfTest(){
    vector<int> vec {1, 3, 5, 7, 9, 1, 3, 13, 19, 5};

    if(all_of(vec.begin(), vec.end(), [](int x){return x>10;}))
        cout<<"All elements are more than 10"<<endl;
    else
        cout<<"Not all elements are more than 10"<<endl;

    if(all_of(vec.begin(), vec.end(), [](int x){return x<20;}))
        cout<<"All elements are less than 20"<<endl;
    else
        cout<<"Not all elements are less than 20"<<endl;

}
void stringTransformTest(){
    cout<<"======================="<<endl;

    string str1 {"This is a test"};
    cout<<"Before transform: "<<str1<<endl;

    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    cout<<"After transform: "<<str1<<endl;
}
int main(){
    //findTest();
    //countTest();
    //countIfTest();
    //replaceTest();
    //allOfTest();
    stringTransformTest();
    return 0;
}