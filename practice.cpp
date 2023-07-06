#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,count=0,temp;
    cout<<"enter number \n";
    cin>>num;
    //num=153
    temp=num;
    while(temp!=0){
        temp=temp/10;
        count++;
    }
    temp=num;
    int sum=0;
    int ln;
    while(temp!=0){
        ln=temp%10;
        sum= pow(ln,count) + sum;
        temp=temp/10;

    }
    cout<<"sum "<<sum;
    
} 