#include <bits/stdc++.h>
using namespace std;
int largestrowsum(int arr[][2], int row, int col)
{
    int maxi = INT_MIN, rowindex=-1;
    
    for (int row = 0; row < 2; row++)
    {
        int sum = 0;
        for (int col = 0; col < 2; col++)
        {
            sum += arr[row][col];
        }
         if(sum>maxi)
    {
        maxi=sum;
        rowindex=row;
    }
    }
    cout<<"maximum sum is "<<maxi<<endl;
    return rowindex;
   

}
bool isPresent(int arr[][2], int target)
{
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            if (arr[row][col] == target)
                return 1;
        }
    }
    return 0;
}
void printsum(int arr[][2], int row, int col)

{

    cout << "sum is  " << endl;
    for (int row = 0; row < 2; row++)
    {
        int sum = 0;
        for (int col = 0; col < 2; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}
void printSum(int arr[][2], int row, int col)
{
    cout << "Printing Sum -> " << endl;
    for (int col = 0; col < 2; col++)
    {
        int sum = 0;

        for (int row = 0; row < 2; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }

    cout << endl;
}

int main()
{
    int arr[2][2];
    int target;
    cout << "enter the elements\n";
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << "the elements are\n";
    
    // for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            cout << arr[row][col];
        }
        cout << endl;
    }cout<<"enter target\n";

    // cin>>target;
    // cout<<target;

    // if(isPresent(arr, target)) {
    //     cout <<" Element found " << endl;
    // }
    // else{
    //     cout <<" Not Found" << endl;
    // }
    // printsum(arr, 2, 2);
    // printSum(arr, 2, 2);
    int ansindex = largestrowsum(arr , 2 , 2);
    cout<<ansindex<<endl;
}