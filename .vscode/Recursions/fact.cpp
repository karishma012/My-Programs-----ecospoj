#include <iostream>
using namespace std;

int fact(int n,int res){
    // if(n==0 || n==1){
    //     return 1;
    // }
    // int ans = n*fact(n-1);
    // return ans;


if(n == 0) {
return res;
}
res *= n;
fact(n-1, res);

//2 methods
}

int main(){
    cout<<fact(5,1);

   return 0;
}
