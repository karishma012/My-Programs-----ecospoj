#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int r,sum=0;
    cin>>n;
    int temp;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)
    {
        cout<<"yes"<<endl;
    }
    else
    cout<<"no "<<endl;
}