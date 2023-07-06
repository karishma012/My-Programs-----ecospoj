#include <bits/stdc++.h>
using namespace std;
int reverse(int num)
{
    int rev = 0;
    int rem;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    return rev;
}
int main()
{
    int num;
    cout << "Enter a number: \n";
    cin >> num;
    int rem, res = 0;
    while (num != 0)
    {
        rem = num % 2;
        res = (res * 10) + rem;
        num /= 2;
    }
    int val = reverse(res);
    cout << val;
}