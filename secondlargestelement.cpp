#include <bits/stdc++.h>
using namespace std;
int second(int n, int arr[], int k)
{
    int i;
    sort(arr, arr + n);
    for (i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[n - 1])
            return arr[i];
    }
    return -1;
}

int main()
{

    //    int arr[4]={1,2,3,4};
    //    swap(arr[1],arr[2]);
    //    for(int i=0;i<4;i++)
    //    {
    //     cout<<arr[i];
    //    }
    // k=3, n=6
    int x = 3 - 1;              //2
    int y = (6 + 1) - (3 - 1);   //
    swap(arr[x], arr[y]);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i];
    }
}
