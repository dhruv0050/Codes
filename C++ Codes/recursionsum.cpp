#include <iostream>
using namespace std;
 int getSum(int arr[],int size){
    if(size==0){
        return 0;
    }
    int sum=arr[0]+getSum(arr+1,size-1);
    return sum;
 }
 int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"sum is"<<endl;
    int ans = getSum(arr,5);
    cout<<ans;
 }