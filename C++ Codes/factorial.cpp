//FACTORIAL USING RECURSION

#include<iostream>
using namespace std;

int fact(int n){
    if(n==1||n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cout<< "Enter a no--> ";
    cin>>n;
    int result=fact(n);
    cout<<"Factorial of "<<n<<" is "<<result<<endl;
}