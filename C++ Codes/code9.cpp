//BASIC STRUCTURE PROGRAM TO INPUT
//AGE, FIRST NAME , LAST NAME AND STANDARD

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


struct student{
    int age;
    string first_name;
    string last_name;
    int standard;
};
int main(){
    student s1;
    cin>>s1.age;
    cin>>s1.first_name;
    cin>>s1.last_name;
    cin>>s1.standard;
    
    cout<<s1.age<<" ";
    cout<<s1.first_name<<" ";
    cout<<s1.last_name<<" ";
    cout<<s1.standard; 

    return 0;
}