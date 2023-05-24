#include <bits/stdc++.h>
using namespace std;
class animal
{
    int num = 20;
public:
string color = "red";
int getnum()
{
    return num;
}
int setnum(int n)
{
    return n;
}

};
int main()
{
    animal s;
    cout<<s.color<<endl;
    cout<<s.getnum()<<endl;
    cout<<s.setnum(30)<<endl;
}