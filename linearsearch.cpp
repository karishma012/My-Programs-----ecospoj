#include <bits/stdc++.h>
using namespace std;
int search(int arr[],int s,int key)
{
    for(int i=0;i<s;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
        // isme return vala mistake mt krna
}
return 0;
}
int main()
{
     int n, i,key;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<"enter key\n";
    cin>>key;
    bool res = search(a,n,key);
    // cout<<"result is  "<<res;    bool is used for true and false
if(res)
{
    cout<<"present\n";   
}
else
cout<<"absent\n";


}