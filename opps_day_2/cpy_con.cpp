#include<iostream>
using namespace std;
class Hero{
    //properties
    private:
    int health;
    public:
    char level;
    Hero(){
        cout<<"constructor called"<<endl;
    }
    //parametereised constructor
    Hero(int health){
        this -> health = health;
    }
    Hero(int health, char level){
        this-> level = level;
        this->health = health;
    }
    //copy constructor
    Hero(Hero& temp){
        cout<<"copy constructor called"<<endl;
        this-> level = temp level;
        this->health = temp health;
    }
    void print(){
        cout<<"health"<<this->health<<endl;
        cout<<"level"<<this->level<<endl;
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
    Hero suresh(70,'c');
    suresh.print();
    //copy cons
    Hero ritesh(suresh);
    ritesh.print();
}
//copy cons_ me pass by value karoge to fas jaoge 
//copy cons_ me pass by reference karoge to jeet jaoge