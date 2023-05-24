#include <iostream>
using namespace std;
void sortfunc(int arr[], int n) // 2 pointer approach
{
    int i=0 ; 
    int j=n-1;  
    // i=left  j=right
    while(i<j)
    {
        if(arr[i]==0)
        {
            i++;
        }
        else if(arr[j]==1)
        {
            j--;
        }
        else  if(arr[i]==1 && arr[j]==0)
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
    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};
    sortfunc(arr, 8);
    printarray(arr, 8);
}