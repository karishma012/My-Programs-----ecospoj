#include <iostream>
using namespace std;


int pow(int x , int n , int res) {
   if(n==0){
    return res;
    }

   res*=x;
   pow(x,n-1,res);
}

int main(){
    cout<<pow(2,3,1);

   return 0;
}