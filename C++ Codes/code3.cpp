  //Question for loop
  
  #include <iostream>
  using namespace std;
  
 int main(){
    int a, b, n;
    char str[10][20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> a >> b;
    
    for (int n = a; n <= b; n++)
    {
        if (n >=1 & n <=9)
        {
            cout << str[n]<< endl;
        }
        else if ( n > 9)
        {    
            if( n%2==0)
            {
                cout << "even" << endl;
            }
            else
            {
                cout << "odd" << endl;
            }
        }
    }
     
 } 