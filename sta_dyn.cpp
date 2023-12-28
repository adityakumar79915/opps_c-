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
    //dynamically allocation
    Hero *b = new Hero;

}