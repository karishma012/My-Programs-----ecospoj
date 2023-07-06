#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"enter\n";
    cin>>num;
    int sum=0;
    int prev=0;
    int rec=1;
    cout<<sum<<" ";
    while(sum!=num){
        
        prev=rec;
        rec=sum;
        sum = prev+rec;
        cout<<sum<<" ";
    }
    
} //0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55,