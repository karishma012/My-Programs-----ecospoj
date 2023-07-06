#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int num;
  
    cout << "Enter a number: \n";
    cin>>num;
    long long int rev=0;
    long long int rem;
    while(num!=0){
      rem = num%10;
      rev = rev*10 + rem;
      num = num/10;
    }
    cout<< rev;
    
} 