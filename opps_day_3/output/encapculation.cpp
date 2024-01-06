#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return this->age;
    }
};
int main(){
    Student first;
    cout<<"sab sahi chalraha hai"<<endl;
}
//encapsulation : wrapping up data member and function
//fully encapsulated class : all-> d.m -> private
//why erncapsulation : for hiding information(data),if we want we can mark class "read only"
//encapsulation : unit testing
