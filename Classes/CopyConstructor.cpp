#include <iostream>
#include <string>
using namespace std;

class Player{
    private:
        string name;
        int health, xp;

    public:
        string getName(){return name;}
        int getHealth(){return health;};
        int getXp(){return xp;}
        Player(string n="No name", int h=100, int x=0):name(n), health(h), xp(x){
            cout<<"Three arguments constructor for "<<name<<endl;
        }
        //Copy constructor
        Player(const Player &source);

        //Deconstructor
        ~Player(){cout<<"Deconstructor called for "<<name<<endl;}
};
Player::Player(const Player &source):name(source.name), health(source.health), xp(source.xp){
    cout<<"Copy constructor - made copy of "<<source.name<<endl;
}
void displayPlayer(Player p){
    cout<<"Name: "<<p.getName()<<endl;
    cout<<"Health: "<<p.getHealth()<<endl;
    cout<<"XP: "<<p.getXp()<<endl;}
int main(){
    Player empty;
    displayPlayer(empty);
    Player pranav("Pranav");
    Player hero("Hero",100);
    Player villian("Villian", 100, 10);


    return 0;
}