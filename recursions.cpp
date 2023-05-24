#include <bits/stdc++.h>
using namespace std;
/*int factorial(int n)
{
    if(n==1)
    return 1;

    return n*factorial(n-1);
}
int main()
{
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<<"ans = "<<ans<<endl;
}*/
// int sum(int n)
// {
//     //base case
//     if(n==0)
//     {
//         return 0;
//     }

//     return n+sum(n-1);
// }
// int main()
// {
//     int n;
//     cout<<"enter the value\n";
//     cin>>n;
//     cout<<"sum is "<<sum(n);
// }
/*int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    return (n*power(n,p-1));
}*/
void print(int arr[],int n)
{
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
}
int fib(int n)
{
    cout<<n<<endl;
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << fib(n);
}
