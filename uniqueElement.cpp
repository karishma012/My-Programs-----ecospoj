#include<iostream>
using namespace std;
int uniqueelement(int arr[],int n)
{
int ans=0;
for(int i=0;i<n;i++)
{
    ans=ans^arr[i];
}
return ans;

}
int main()
{
    int brr[5]={ 2,5,7,2,5};
    int res= uniqueelement(brr,5);
    cout<<"result is "<<res;
    return 0;
}