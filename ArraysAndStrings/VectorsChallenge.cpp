#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    vector2.push_back(100);
    vector2.push_back(200);

    vector <vector <int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout<<"Vector_2d:"<<endl;

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<vector_2d[i][j]<<" ";
        }
        cout<<endl;
    }

    vector1.at(0) = 1000;

    cout<<"Vector_2d:"<<endl;

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<vector_2d[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Vector1:"<<endl;
    
    for (int i=0; i<vector1.size(); i++){
            cout<<vector1.at(i)<<endl;
    }

}