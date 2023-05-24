#include <bits/stdc++.h> 
using namespace std;
void printvec(vector<int>p)
{
cout<<"size = "<<p.size()<<endl;
for(int i=0;i<p.size();++i)
{
    cout<<p[i]<<" ";
}
}
int main()
{
    vector <int> v;
    int n,i;
    cin>>n;
    for(i=0;i<n;++i)
    {
      int x;
      cin>>x;
      v.push_back(x);
    }
   printvec(v);
}