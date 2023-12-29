//DELETION OF A INTEGER FROM AN ARRAY 

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. to delete from above array ";
    cin>>n;
    int arr[5]={1,2,3,4,5};
    for(int i=0 ; i<5 ; i++){
        if(arr[i]==n){
            continue;
        }
        cout<<arr[i]<<endl;
    }
    return 0;
}