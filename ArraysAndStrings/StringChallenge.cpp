#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    // string unformatted_full_name {"StephenHawking"};
    
    // //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    // //----WRITE YOUR CODE BELOW THIS LINE----
    // string first_name {unformatted_full_name, 0, 7};
        
    // string last_name;
    // last_name = unformatted_full_name.substr(7, 7);
    
    // string formatted_full_name;
    // formatted_full_name = first_name + last_name;
    // formatted_full_name.insert(7, " ");
    
    
    // //----WRITE YOUR CODE ABOVE THIS LINE----
    // //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    // cout << formatted_full_name;
    string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"Leibniz"};
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    journal_entry_1.erase(0, 6);

    if(journal_entry_1>journal_entry_2){
        string temp_string {journal_entry_1};
        journal_entry_1 = journal_entry_2;
        journal_entry_2 = temp_string;
    }
    cout<<journal_entry_1<<endl<<journal_entry_2;
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    //cout << journal_entry_1 << "\n" << journal_entry_2;

} 