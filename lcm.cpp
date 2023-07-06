#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        
            b = b - a;
        
    } // yaha dono equal ho gaye hai
    return a;
}
int main()
{
    int a, b;
    cout << "enter the numbers\n";
    cin >> a >> b;
    int val = gcd(a, b);
    //to find lcm
    int ans= (a*b)/val;
    cout<<ans;
}