#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: \n";
    cin>>num;
    int res=0,e=0,rem;

    while(num!=0){
        rem=num%10;
        res+=rem*pow(2,e);
        e++;
        num/=10;
    }
    cout<<res;
}