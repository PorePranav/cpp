#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void printMenu(vector<int> &);
void printNumbers(vector<int> const &);
void addNumber(vector<int> &, int);
void meanNumber(vector<int> const &);
void minNumber(vector<int> const &);
void maxNumber(vector<int> const &);


int main(){
    vector<int> numbers;
    printMenu(numbers);
}

void printMenu(vector<int> &numbers){
    char choice;
    while(1){
        cout<<"P - Print numbers"<<endl;
        cout<<"A - Add a number"<<endl;
        cout<<"M - Display mean of the numbers"<<endl;
        cout<<"S - Display the smallest number"<<endl;
        cout<<"L - Display the largest number"<<endl;
        cout<<"Q - Quit"<<endl;

        cin>>choice;

        if(choice=='P' || choice=='p')
            printNumbers(numbers);

        else if(choice=='A' || choice=='a'){
            int num;
            cout<<"Enter the number: ";
            cin>>num;

            addNumber(numbers, num);
        }

        else if(choice=='M' || choice=='m')
            meanNumber(numbers);
        
        else if(choice=='S' || choice=='s')
            minNumber(numbers);
        
        else if(choice=='L' || choice=='l')
            maxNumber(numbers);
        
        else if(choice=='Q' || choice=='q')
            break;
        
        else{
            cout<<"Wrong choice entered, plese give a correct input"<<endl;
            continue;
        }
    }
}

void printNumbers(vector<int> const &numbers){
    cout<<"[";
    for (int i=0; i<numbers.size(); i++){
        cout<<numbers.at(i);
        if(i!=numbers.size()-1)
            cout<<" ";
    }
    cout<<"]"<<endl;
}

void addNumber(vector<int> &numbers, int num){
    numbers.push_back(num);
    cout<<"The number "<<num<<" was added to the vector"<<endl;
}

void meanNumber(vector<int> const &numbers){
    int sum=0;
    double mean;
    
    for(int i=0; i<numbers.size(); i++)
        sum+=numbers.at(i);
    

    mean=sum/numbers.size();
    cout<<"Mean of the numbers is: "<<mean<<endl;
}

void minNumber(vector<int> const &numbers){
    int min=INT_MAX;
    for(int i=0; i<numbers.size(); i++){
        if(min>numbers.at(i))
            min=numbers.at(i);
    }
    cout<<"The minimum number in the vector is: "<<min<<endl;
}

void maxNumber(vector<int>const &numbers){
    int max=INT_MIN;
    for(int i=0; i<numbers.size(); i++){
        if(max<numbers.at(i))
            max=numbers.at(i);
    }
    cout<<"The maximum number in the vector is: "<<max<<endl;
}