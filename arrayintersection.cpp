#include<iostream>
using namespace std;
 int arrayintersection(int arr[],int brr[],int n,int m)
 {
   int i=0,j=0,ans;
   while(i<n && j<m)
   {
    if(arr[i]==brr[j])
    {
      ans=arr[i];  
      i++;
      j++;
    }
    else if(arr[i]<brr[j])
    {
        i++;
    }
    else
    j++;
   }  
   return ans;


 }
 int main()
 {
    int arr[]={1,3,6,7,8,9};
    int brr[]={3,6,3,3};
    int res=arrayintersection(arr,brr,6,4);
    cout<<res<<endl;
    return 0;

 }