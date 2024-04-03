#include<bits/stdc++.h>
using namespace std;

int main(){
   string s = "abbacc";
   map<char, int> mp;
   int maxi = INT_MIN;
   char ans;  // Change string to char
   for(int i = 0; i < s.length(); i++){
      mp[s[i]]++;
      if(mp[s[i]] > maxi){
         maxi = mp[s[i]];
         ans = s[i];
      }
   }
   int cnt = 0;
   for(auto it : mp){
      if(it.second == maxi){
         cnt++;
      }
   }
   if(cnt > 1) {
      cout << 0;
   } else {
      cout << ans;
   }

   //
   
}
