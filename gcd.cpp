#include <bits/stdc++.h>
using namespace std;
int gcd(int a , int b)
{
    if(a==0)
    return b;
    if(b==0)
    return a;
    while(a!=b)
   { 
    if(a>b)
    {
      a=a-b;
    }
    else
    {
        b=b-a;
    }
    }
    return a;  // koi bi ek return krdo

}
int main()
{
    int a,b;
    cout<<"enter the no\n";
    cin>>a>>b;
    int ans = gcd(a,b);
    cout<<"result is "<<ans<<endl;
}