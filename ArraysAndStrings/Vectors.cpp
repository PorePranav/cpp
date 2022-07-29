#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    // vector <int> test_scores (3, 100);
    // test_scores.push_back(90);
    // for (int i=0; i<test_scores.size(); i++){
    //         cout<<test_scores.at(i)<<endl;
    // }
    // cout<<"Size of test_scores is: "<< test_scores.size()<<endl;

    vector <vector<int>> movieRatings{
        {1, 2, 3, 4},
        {1, 2, 4, 4}, 
        {1, 3, 4, 5}
    };

    cout<<"Here are the movie ratings for reviewer #1 using array syntax:"<<endl;
    for (int i=0; i<4; i++){
            cout<<movieRatings[0][i]<<endl;
    } 

    return 0;
}