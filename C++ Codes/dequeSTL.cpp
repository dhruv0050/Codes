#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int>d(5,1);
    for (int i:d){
        cout<<i<<" "<<endl;
    }
    d.push_back(4);
    cout<<"After pushback d-->"<<endl;
    for (int i:d){
        cout<<i<<" "<<endl;
    }
    d.push_front(8);
    cout<<"After pushfront-->"<<endl;
    for (int i:d){
        cout<<i<<" "<<endl;
    }
    cout<<"size-->"<<d.size()<<endl;
    cout<<"front-->"<<d.front()<<endl;
    cout<<"back-->"<<d.back()<<endl;
    cout<<"Element at index 3-->"<<d.at(3)<<endl;
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
    cout<<"Erasing from start to index 2-->"<<endl;
    d.erase(d.begin(),d.begin()+2);
    cout<<"after erase-->"<<endl;
    for (int i:d){
        cout<<i<<" "<<endl;
    }



}
