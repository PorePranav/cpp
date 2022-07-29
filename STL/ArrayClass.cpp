//Created by Pranav on 8th Apr 2022
#include <iostream>
#include <string>
using namespace std;

template <typename T, int N>
class Array{
    private:
        int size {N};
        T values [N];
        friend ostream& operator<<(ostream &os, const Array<T, N> &arr){
            os<<"[";
            for(const auto &val : arr.values)
                os<<val<<" ";
            os<<"]";
            return os;
        }
    public:
        Array() = default;
        Array(T init_val){
            for(auto &item : values)
                item = init_val;
        }
        void fill(T val){
            for(auto &item : values)
                item = val;
        }
        int getSize() const {
            return size;
        }
        T& operator[](int index){
            return values[index];
        }
};

int main(){
    Array<int, 5> nums;
    cout<<"The size of the array is: "<<nums.getSize()<<endl;
    cout<<nums<<endl;

    nums.fill(5);
    cout<<nums<<endl;

    nums[0] = 2000;
    nums[3] = 10;

    cout<<nums<<endl;

    Array<string, 10> strings("Pranav");
    cout<<"The size of strings is: "<<strings.getSize()<<endl;
    cout<<strings<<endl;

    strings[0] = "Aashish";
    cout<<strings<<endl;

    return 0;
}