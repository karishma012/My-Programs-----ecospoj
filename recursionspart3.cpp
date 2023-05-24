#include <bits/stdc++.h>
using namespace std;
// bool isSorted(int arr[],int n)
// {
//     //base case
//     if(n==0 || n==1)
//     {
//         return true;
//     }

//     //processing
// if(arr[0]>arr[1])
// {
//     return false;
// }
// else{
//     bool remainingPart = isSorted(arr+1,n-1); //recursive part
//     return remainingPart;
// }

// }

// int main()
// {
//     int arr[5]={2,10,9,9,9};
//     bool ans = isSorted(arr,5);
//     if(ans)
//     {
//         cout<<"Sorted \n";
    
//     }
//     else{
//         cout<<"not sorted \n";
//     }
// }
int getSum(int arr[],int n)
{
   //base case
   if(n==0)
   {
    return 0;
   }
   if(n==1)
   {
    return arr[0];
   }
   // processing
   int remainingPart = getSum(arr+1,n-1);
   int sum = arr[0]+remainingPart;
   return sum; 
}
int main()
{
    int arr[5] = {2,4,9,9,9};
    int size = 5;

    int sum = getSum(arr, size);

    cout << "Sum is " << sum << endl;

    return 0;
}