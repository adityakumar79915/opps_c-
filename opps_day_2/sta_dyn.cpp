#include<iostream>
using namespace std;
class Hero{
    //properties
    private:
    int health;
    public:
    char level;
    void print(){
        cout<<level<<endl;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health =h ;
    }
    void setLevel(char ch){
        level = ch;
    }
};
int main(){
    //static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('8');
    cout<<"level is"<<a.level<<endl;
    cout<<"health is"<<a.getHealth()<<endl;
    //dynamically allocation
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout<<"level is"<<(*b).level<<endl;
    cout<<"health is"<<(*b).getHealth()<<endl;

    cout<<"level is"<<b->level<<endl;
    cout<<"health is"<<b->getHealth()<<endl;
}
