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
    cout << "enter\n";
    cin >> num;
    vector<int> v;
    for (int i = 3; i < num; i++)
    {
        if (isPrime(i))
        {
            v.push_back(i);
        }
    }
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i; j < v.size(); j++)
        {
            if (v[j] + v[i] == num)
            {
                cout << v[j] << "+" << v[i] << "=" << num << endl;
            }
        }
    }

    return 0;
}