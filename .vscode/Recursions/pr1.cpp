#include <iostream>
using namespace std;

void recursion(int n){
    if(n==0){
        return;
    }
    
    recursion(n-1);
    cout<<n<<endl;
}

int main(){
    recursion(5);

   return 0;
}
