#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int>a(6,1);
    cout<<"Printing a"<<endl;
    for(int i:a){
        cout<<i<<"  "<<endl;
    }
    vector <int> b(a);
    cout<<"printing b"<<endl;
    for(int i:b){
        cout<<i<<"  "<<endl;
    }
    a.pop_back();
    cout<<"Printing a again after pop"<<endl;
    for(int i:a){
        cout<<i<<"  "<<endl;
    }
    a.push_back(9);
    cout<<"Printing a again"<<endl;
    for(int i:a){
        cout<<i<<"  "<<endl;
    }
    cout<<"front element of a-->"<<a.front()<<endl;
    cout<<"last element of a-->"<<a.back()<<endl;
    b.clear();
    cout<<"b after clearing"<<endl;
    for(int i:b){
        cout<<i<<"  "<<endl;
    }
}