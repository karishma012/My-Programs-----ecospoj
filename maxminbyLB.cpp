#include <bits/stdc++.h>
using namespace std;
int getmax(int arr[], int s) //INT_MAX minimum value nikalke dega
{
    int maxi = INT_MIN;
    for (int i = 0; i < s; i++)
    // {
    //     if (arr[i] > max)
            
    //     max = arr[i];
        
    // }
    {
        maxi = max(arr[i],maxi) ;
    }
    return maxi;
}
int getmin(int arr[], int s)
{
    int mini = INT_MAX;
    for (int i = 0; i < s; i++)
    // {
    //     if (arr[i] < min)
            
    //     min = arr[i];
        
    // }
    {
        mini = min(arr[i],mini) ;
    }
    return mini;
}
int main()
{
    int n, i;
    cin >> n;
    int a[100];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "MAX VALUE = " << getmax(a, n) << endl;
    cout << "MIN VALUE = " << getmin(a, n);
}