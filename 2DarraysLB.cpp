#include <bits/stdc++.h>
using namespace std;
int max(int arr[][2],int m,int n)
{
int cnt=0;
//n rows m cols
for(int row=0;row<n;row++)
{
    for(int col=0;col<m;col++)
    {
        if(arr[row][col]==1)
        cnt++;
    }
    return cnt;
}
}
int main()
{
    int arr[2][2]={0,0,1,1};
    int ans = max(arr,2,2);
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            cout << arr[row][col];
        }
        cout << endl;
    }
    
    cout<<ans<<endl;
}