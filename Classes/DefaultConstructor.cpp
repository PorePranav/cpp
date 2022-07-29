#include <iostream>
#include <string>

using namespace std;
class Player{
    private:
        int xp, health;
        string name;
    public:
        Player(string="No Name", int=100, int=3);
        string getName();
        int getHealth();
        int getXp();
};
string Player::getName(){
    return name;
}
int Player::getXp(){
    return xp;
}
int Player::getHealth(){
    return health;
}
Player::Player(string n, int h, int x){
    name=n;
    health=h;
    xp=x;
}
int main(){
    Player p1("Pranav", 100, 6);
    cout<<p1.getName()<<" "<<p1.getHealth()<<" "<<p1.getXp()<<endl;
}