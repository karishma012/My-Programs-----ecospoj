#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{    
    int s,e,mid;
    s=0;
    e=n-1;
    
    
    while(s<=e)
    mid=s+(e-s)/2;
    {
    if(arr[mid]==key)
    {
      return mid;
    }
    if(key>arr[mid])
    {
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    
    }
    return -1;
}

int main()
{
    int arr[5]={2,3,6,1,4};
    int res= binarysearch(arr,5,1);
    cout<<"index is  "<<res;
     
    return 0;
}