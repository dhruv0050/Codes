//Input consists of the following space-separated values: int, long, char, float, and double, respectively.

//Output Format

//Print each element on a new line in the same order it was received as input. 
//Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long long b;
    char c;
    double d;
    long double e;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    ;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<fixed<<d<<endl;
    cout<<fixed<<e<<endl;
    return 0;
}
