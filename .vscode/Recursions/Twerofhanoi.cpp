#include <iostream>
using namespace std;

void TowerOfHanoi(int n , string src , string help , string dest){

    //base case
    if(n==1){
        cout<<n<<" is transferred from "<<src<<" to "<<dest<<endl;
        return;
    }
    TowerOfHanoi(n-1 ,src , dest, help );
    cout<<n<<" is transferred from "<<src<<" to "<<dest<<endl;
    TowerOfHanoi(n-1 ,help , src, dest );
}


int main(){
    
    TowerOfHanoi(2,"s","h","d");
   return 0;
}