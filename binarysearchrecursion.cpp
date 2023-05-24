#include <bits/stdc++.h>
using namespace std;
void print(int arr[],int n)
{
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
}
bool binarySearch(int arr[], int s, int e, int key)
{
// there r 2 cases T & F
print(arr,5);
if(s>e)
{
    return false;
}
int mid = s+(e-s)/2;
if(arr[mid]==key)
{
    return true;
}
 // recursive case
 if(arr[mid]<key)
 {
    return binarySearch(arr,mid+1,e,key);
 }
 else 
 {
    return binarySearch(arr,s,mid-1,key);
 }



}
int main()
{
    int arr[5] = {2,4,6,10,11};
    int size = 5;
    int key = 4;

    cout << "Present or not " << binarySearch(arr, 0, size-1, key) << endl;

    return 0;
}