#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int>d(5,10);
    for (int i:d){
        cout<<i<<" "<<endl;
    }
    d.push_back(4400);
    cout<<"After pushback d-->"<<endl;
    for (int i:d){
        cout<<i<<" "<<endl;
    }
    d.push_front(800);
    cout<<"After pushfront-->"<<endl;
    for (int i:d){
        cout<<i<<" "<<endl;
    }
    cout<<"size-->"<<d.size()<<endl;
    cout<<"front-->"<<d.front()<<endl;
    cout<<"back-->"<<d.back()<<endl;
    d.pop_front();
    cout<<"after popfront-->"<<endl;
    for (int i:d){
        cout<<i<<" "<<endl;
    }
    d.pop_back();
    cout<<"after popback-->"<<endl;
    for (int i:d){
        cout<<i<<" "<<endl;
    }
    cout<<"Erasing-->"<<endl;
    d.erase(d.begin());
    cout<<"after erase-->"<<endl;
    for (int i:d){
        cout<<i<<" "<<endl;
    }



}