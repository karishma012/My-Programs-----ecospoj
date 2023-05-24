#include<iostream>
using namespace std;
int part1int(int n)
{
    int s=0,e=n-1,ans=-1;
    int mid=s+(e-s)/2;
    
    while(s<=e)
    {
      int square=mid*mid;
        if(square>n)
        {
            e=mid-1;
        }
        else if(square==n)
        {
            return mid;
        }
        else
        {
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double precision(int n ,int precisevalue , int res )
{
   double factor=1;
  double ans=res;
  for(int i=0;i<precisevalue;i++)
    {
     
     factor = factor/10;
      
        for(double j=ans; (j*j)<n; j=j+factor)
          {
             ans = j;
          }
      
  
     
    }
   return ans;
}
int main()
{
   {
    int n;
    cout <<" Enter the number " << endl;
    cin >> n;

    int tempSol = part1int(n);
    cout <<" Answer is " << precision(n, 3, tempSol) << endl;

    return 0;
}
  }