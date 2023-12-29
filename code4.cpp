//MAXIMUM OUT OF 4 INPUTTED INTEGERS

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;  
    int max_val=max({a,b,c,d});
    cout<<max_val;
}