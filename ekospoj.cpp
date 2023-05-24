#include <iostream>
using namespace std;
bool solve(int *arr , int n, int m ,int mid)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>mid)
		{
			sum+=arr[i]-mid;
		}
	}
	if(sum>=m)return true;
	else return false;
}

int main() {
	
	// your code here
  int n,m;
	cin>>n>>m;
	int arr[n+1];
	
	int s=0;
	int e=arr[n-1];
	int ans=0;
	while(s<=e)
	{
		int mid=s+(e-s)/2;
		if(solve(arr,n,m,mid))
		{
			ans=arr[mid];
			s=mid+1;
		}
		else
		{
			e=mid-1;
		}
	}
	cout<<ans;

	return 0;
}