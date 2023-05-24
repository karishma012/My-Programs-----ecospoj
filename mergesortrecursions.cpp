#include <bits/stdc++.h>
using namespace std;
void merge(int arr[],int s,int e)
{
 int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int k = s;
    for(int x=0; x<len1; x++) {
        first[x] = arr[k++];
    }

    k = mid+1;
    for(int x=0; x<len2; x++) {
        second[x] = arr[k++];
    }

    //merge 2 sorted arrays     
    int i = 0;
    int j = 0;
    k = s;

    while(i < len1 && j < len2) {
        if(first[i] < second[j]) {
            arr[k++] = first[i++];
        }
        else{
            arr[k++] = second[j++];
        }
    }   

    while(i < len1) {
        arr[k++] = first[i++];
    }

    while(j < len2 ) {
        arr [k++] = second[j++];
    }

    delete []first;
    delete []second;


}
void mergeSort(int arr[],int s,int e)
{
    //base case
    if(s >= e) {
        return;
    }
    
    int mid = (s+e)/2;

    //left part sort karna h 
    mergeSort(arr, s, mid);
    
    //right part sort karna h 
    mergeSort(arr, mid+1, e);
    //merge
    merge(arr, s, e);
}
int main() {

    int arr[8] = {2,1,5,3,9,6,4,7};
    int n = 8;

    mergeSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}