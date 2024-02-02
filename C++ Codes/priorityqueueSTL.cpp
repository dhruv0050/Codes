#include <iostream>
#include <queue>
using namespace std;
int main(){
    //MAX HEAP
    priority_queue<int>maxi;
    maxi.push(10);
    maxi.push(4000);
    maxi.push(23);
    maxi.push(05);
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;


    //MIN HEAP
    priority_queue<int,vector<int>,greater<int> >mini;
    mini.push(10);
    mini.push(4000);
    mini.push(23);
    mini.push(05);
    int d=mini.size();
    for(int i=0;i<d;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
}