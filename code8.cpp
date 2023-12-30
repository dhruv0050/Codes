//INPUTTING TWO STRING
//PRINT THEIR LENGTHS SEPERATED BY A SPACE
//THEN PRINT STRING PRODUCED AFTER MERGING ABOVE TWO STRINGS
//THEN REPLACE CHARACTER OF 0th INDEX OF BOTH WITH EACH OTHER



#include <iostream>
using namespace std;

int main() {  
    string a,b;
    cin>>a>>b;
    int lena,lenb;
    lena=a.size();
    lenb=b.size();
    cout<<lena<<" "<<lenb<<endl;
    cout<<(a+b)<<endl;
    char c0=a[0];
    char c1=b[0];
    a[0]=c1;
    b[0]=c0;
    cout<<a<<" "<<b<<endl;
    return 0;
}