#include <iostream>
#include <string>
using namespace std;
class Hero{
    private:
    int health;
    char level;
    public:
    string name;

    int getHealth(){
        return health;
    }
    char getlevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }
    void setlevel(int h){
        level=h;
    }
};

int main(){
    Hero d;
    d.setHealth(90);
    d.setlevel('A');
    d.name="DHRUVSHARMA";
    cout<<"Health-->"<<d.getHealth()<<endl;
    cout<<"Level-->"<<d.getlevel()<<endl;
    cout<<"Name-->"<<d.name<<endl;
}