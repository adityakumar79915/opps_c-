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
    //creating an object
    Hero ramesh;
    cout<<"size of ramesh"<<sizeof(ramesh)<<endl;
    cout<<"ramesh health is"<<ramesh.getHealth()<<endl;
    ramesh.setHealth(70);
    ramesh.level='A';
    cout<<"health is"<<ramesh.getHealth()<<endl;
    cout<<"health is"<<ramesh.level<<endl;
    return 0;
}
//to access private use getter and setter
//getter : fatch 
//setter : condition