#include<iostream>
using namespace std;
class Hero{
    //properties
    public:
    int health;
    char level;
    void print(){
        cout<<level<<endl;
    }
};
int main(){
    //creating an object
    Hero ramesh;
    ramesh.health=70;
    ramesh.level='A';
    cout<<"health is"<<ramesh.health<<endl;
    cout<<"health is"<<ramesh.level<<endl;
    return 0;
}

//access modifier : public,private,protected
//by default class me access modifer priivate hoT hai
//private : within class
