#include <bits/stdc++.h>
using namespace std;
void sortf(int arr[],int n)
{
   int i=0 ; 
    int j=n-1;  
    // i=left  j=right
    while(i<j)
    {
        if(arr[i]<0)
        {
            i++;
        }
        else if(arr[j]>=0)
        {
            j--;
        }
        else  if(arr[i]<0 && arr[j]>=0)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[5]={0, -2, -1, 2, 0};
    
     sortf(arr,5);
     
     printarray(arr,5);
     
}