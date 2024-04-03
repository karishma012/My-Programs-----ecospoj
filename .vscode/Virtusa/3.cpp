#include<bits/stdc++.h>
using namespace std;
//Queries to check if string B exists as substring in string A

int main(){
   string A = "GeeksForGeeks";
   string B = "Geeks";
   int q[3] = {0, 5, 8}  ;
   string newString;
   int n = B.length();
   for(int i = 0 ; i<3 ; i++){
        newString = A.substr(q[i],n);
        if(B == newString){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
   } 
   return 0;
   
}
