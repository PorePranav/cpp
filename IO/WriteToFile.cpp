//Created by Pranav on 7th Apr 2022
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream out_file {"output.txt"};
    if(!out_file){
        cerr<<"Error creating file"<<endl;
    }

    string line {};
    cout<<"Enter something to write to the file: ";
    getline(cin,line);
    out_file<<line<<endl;

    out_file.close();
    return 0;
}