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
        cout<<"this->"<<this<<endl;
        this -> health = health;
    }
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
    //statically
    Hero ramesh(10);
    cout<<"address of ramesh"<<&ramesh<<endl;
    ramesh.getHealth();
    //dynamically
    Hero *h = new Hero();

}
//this keyword: called the current class
//store address of current object
//whenever we write our own constructor default constructor ends itself