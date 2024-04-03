#include<bits/stdc++.h>
using namespace std;
int main(){
   string s = "as12jx787jksj8jn9823"
 
   int sum = 0;
   for(int i=0;i<s.size();i++){
    if(s[i] >= '0' && s[i] <='9'){
        if(isalpha(s[i])){continue;}
        else{
            sum+=s[i];
        }
    }
   }
   
}