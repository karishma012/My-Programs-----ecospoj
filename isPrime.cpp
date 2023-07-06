#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    // if u want u can write it as for(i=2 to n/2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int num;

    cout << "Enter a number: \n";
    cin >> num;
    if (num == 0 || num == 1)
    {
        cout << "not prime\n";
    }
    if (isPrime(num))
    {
        cout << "prime\n";
    }
    else
    {
        cout << "not prime\n";
    }
}