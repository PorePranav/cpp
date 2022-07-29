//Created by Pranav on 9th Apr 2022
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <map>
using namespace std;

void display(const vector<int> &vec){
    cout<<"[";
    for(auto const &element : vec)
        cout<<element<<" ";
    cout<<"]"<<endl;
}

void test1(){
    cout<<"==============================="<<endl;
    vector<int> num1 {1, 2, 3, 4, 5};
    auto it = num1.begin();
    cout<<*it<<endl;

    it++;
    cout<<*it<<endl;

    it+=2;
    cout<<*it<<endl;

    it-=2;
    cout<<*it<<endl;

    it = num1.end() - 1;
    cout<<*it<<endl;

}

void test2(){
    cout<<"=========================="<<endl;

    vector<int> nums1 {1, 2, 3, 4, 5};
    vector<int>::iterator it = nums1.begin();

    while(it != nums1.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    it = nums1.begin();

    while(it != nums1.end()){
        *it = 0;
        it++;
    }

    it = nums1.begin();

    while(it != nums1.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    display(nums1);
}

void test3(){
    cout<<"============================"<<endl;
    vector<int> nums1 {1, 2, 3, 4, 5};

    vector<int>::const_iterator it1 = nums1.cbegin();

    while(it1 != nums1.end()){
        cout<<*it1<<" ";
        it1++;
    }
    cout<<endl;

    // it1 = nums1.begin();
    // while(it1 != nums1.end()){
    //     *it1 = 0;
    // }

}

void test4(){
    vector<int> vec {1, 2, 3, 4};
    vector<int>::reverse_iterator it1 = vec.rbegin();
    
    while(it1 != vec.rend()){
        cout<<*it1<<" ";
        it1++;
    }
    cout<<endl;

    list<string> name {"Larry", "Moe", "Curly"};
    list<string>::const_reverse_iterator it = name.crbegin();

    while(it != name.crend()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;


    map<string, string> favourites {{"Pranav", "C++"}, {"Aashish", "Java"}, {"Rahul", "Python"}};
    map<string, string>::const_reverse_iterator it2 = favourites.crbegin();

    while(it2 != favourites.crend()){
        cout<<it2->first<<"->"<<it2->second<<" ";
        it2++;
    }

    cout<<endl;
}

void test5(){

}
int main(){
    vector<int> vec1 {1, 2, 3, 4};
    //display(vec1);
    //test1();
    //test2();
    // test3();
    test4();
    return 0;
};
    
