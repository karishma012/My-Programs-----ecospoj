#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key)
{
	int s,e,mid;
	s=0;
	e=size-1;
	//ye sab (s,e,mid) hum index lere hai array ka arr[] ke andar vala ans ya value consider hoga
while(s<=e)
{
	mid=s+(e-s)/2;
	if(key==arr[mid])
	{
		return mid;
	}
	else if(key>arr[mid])
	{
		s=mid+1;
	}
	else if(key<arr[mid])
	{
		e=mid-1;
	}

}
return -1;

}
int main()
{    
	int even[4]={2,3,4,5};
	int odd[3]={1,7,8};
	int ans = binarysearch(even,4,2);
	int res= binarysearch(odd,3,8);
	cout<<"even = "<<ans<<endl;
	cout<<"odd = "<<res<<endl;

	

	return 0;
	
}