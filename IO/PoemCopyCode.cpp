//Created by Pranav on 7th Apr 2022
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream in_file {"poem.txt"};
    ofstream out_file {"poemcopy.txt"};

    if(!in_file.is_open()){
        cout<<"Couldn't open the source file"<<endl;
        return 1;
    }

    if(!out_file.is_open()){
        cout<<"Couldn't create the copy file"<<endl;
        return 1;
    }

    string stream {};
    while(!in_file.eof()){
        getline(in_file, stream);
        out_file<<stream<<endl;
    }

    in_file.close();
    out_file.close();

    return 0;
}