#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("Hello");
    s.push("world");
    s.push("of");
    s.push("C++");
    cout<<"Size-->"<<s.size()<<endl;
    cout<<"Top element-->"<<s.top()<<endl;
    s.pop();
    cout<<"Top element now-->"<<s.top()<<endl;
}