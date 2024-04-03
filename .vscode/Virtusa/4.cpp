#include<bits/stdc++.h>
using namespace std;
//Problem Statement Given an integer array 'A', find the length of its longest increasing subsequence (LIS). LIS is a sub-array of thegiven integer array where elements are sorted in a monotonic/strict increasing order.You need to fill in a functionthat takes two inputs - integer 'n' and an integer array 'A' containing 'n'integers and returns the length of its LIS.Input Format First line contains integer input 'n' (1 = input1 <= 1000), size of array.Second line contains integer array 'A' input, containing 'n' integers, elements of the array.
int main(){
    int arr[] = {50, 3, 10, 7, 40, 80};
    int cnt;
    int maxi = INT_MIN;
    for(int i = 0 ; i < 6 ; i++){
        int k = i ;
         cnt = 1;
        for(int j=i+1 ; j<6 ; j++){
            if(arr[j] > arr[k]){
                cnt++;
                maxi = max(maxi , cnt);
                k = j;

            }
        }
    }
    cout<<maxi<<endl;
   
   return 0;
   
}
