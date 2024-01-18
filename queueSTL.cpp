#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int>s;
    s.push(10);
    s.push(4000);
    s.push(23);
    s.push(05);
    cout<<"Size-->"<<s.size()<<endl;
    cout<<"Front element-->"<<s.front()<<endl;
    s.pop();
    cout<<"Front element now-->"<<s.front()<<endl;
    cout<<"Size now-->"<<s.size()<<endl;
}