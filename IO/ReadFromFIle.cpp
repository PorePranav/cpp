//Created by Pranav on 7th Apr 2022
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream in_file {"poem.txt"};
    string stream;

    while(!in_file.eof()){
        string line;
        getline(in_file, line);
        cout<<line<<endl;
    }
    in_file.close();
    
    return 0;
}