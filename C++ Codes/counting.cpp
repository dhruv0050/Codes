//COUNTING USING RECURSION

#include<iostream>
using namespace std;

void count(int n){
    if(n==0){
        return ;
    }
   
    count(n-1);

    cout<<n<<" ";
}
int main(){
    int n;
    cout<< "Enter a no--> ";
    cin>>n;
    count(n);
    return 0;
}