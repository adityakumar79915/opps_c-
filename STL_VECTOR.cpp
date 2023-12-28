#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"size->>"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"size->>"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"size->>"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"size->>"<<v.capacity()<<endl;
    cout<<"size-->"<<v.size()<<endl;
    cout<<"size-->"<<v.at(1)<<endl;
    cout<<"front"<<v.front()<<endl;
    cout<<"back"<<v.back()<<endl;
    cout<<"element before pop"<<endl;

}