#include <bits/stdc++.h>
using namespace std;
void reachHome(int src, int dest)
{
cout<<" src is  "<<src<<" dest is  "<<dest<<endl;
//base case
if(src == dest) {
        cout << " pahuch gya " << endl;
        return ;
    }
    //processing
    src++;
reachHome(src,dest);

}
// void inc(int n)
// {
//     //base case
//     if(n==1)
//     {
//         cout<<"1"<<endl;
//         return;
//     }


//      return inc(n-1);
//      cout<<n<<endl;
// 
int main()
{
    // int n;
    // cout<<"enter the value\n";
    // cin>>n;
    // inc(n);
    int src = 1;
    int dest = 10;
    cout << endl;

    reachHome(src, dest);


    return 0;
}
