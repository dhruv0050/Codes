#include <bits/stdc++.h>
#include<string>
using namespace std;
bool palindrome(int n)
{
    string s=to_string(n);
    string v=s;
    reverse(s.begin(),s.end());
    return (s==v)?1:0;
}
int main(){
    int num;
    cin>>num;
    if(palindrome(num)){
        cout<<"It is a palindrome number"<<endl;
    }
    else{
        cout<<"Not a palindrome number"<<endl;
    }
}