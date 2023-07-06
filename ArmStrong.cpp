#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, count = 0, temp;
    cout << "enter number \n";
    cin >> num;
    // num=153
    temp = num;
    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }
    temp = num;
    int sum = 0;
    int ln;
    while (temp != 0)
    {
        ln = temp % 10;
        sum = pow(ln, count) + sum;
        temp = temp / 10;
    }
    cout << "sum " << sum;
}
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int num, count = 0;
//     cout << "Enter a number: ";
//     cin >> num;

//     int temp = num;  // Store the original value of num

//     // Count the number of digits in num
//     while (num != 0) {
//         num = num / 10;
//         count++;
//     }

//     num = temp;  // Restore the original value of num

//     int sum = 0;
//     int ln;

//     // Calculate the sum of digits raised to the power of count
//     while (num != 0) {
//         ln = num % 10;
//         sum = pow(ln, count) + sum;
//         num = num / 10;
//     }

//     if (sum == temp) {
//         cout << "The number is an Armstrong number." << endl;
//     } else {
//         cout << "The number is not an Armstrong number." << endl;
//     }

//     return 0;
// }
