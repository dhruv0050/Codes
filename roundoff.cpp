//SALARY CALCULATOR

#include <bits/stdc++.h> 
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int basic;
    cin>>basic;
    char upchar;
    cin>>upchar;
    double hra,da,pf,allow;
    hra=0.2*basic;
    da=0.5*basic;
    pf=0.11*basic;
    if(upchar=='A'){
        allow=1700;
    }
    else if(upchar=='B'){
        allow=1500;
    }
    else{
        allow=1300;
    }
    double totalSalary=basic+hra+da+allow-pf;
    cout<<round(totalSalary)<<endl;

    return 0;
}
