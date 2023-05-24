#include<iostream>
using namespace std;
void reversearray(int arr[],int n)
{
    int s=0,e=n-1;
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {cout<<" "<<arr[i];
}
cout<<endl;
}
int main()
{
    int even[4]={ 2,4,6,7};
    int odd[5]={ 2,4,6,7,1};
     reversearray(even,4);
     printarray(even,4);
     reversearray(odd,5);
     printarray(odd,5);

}