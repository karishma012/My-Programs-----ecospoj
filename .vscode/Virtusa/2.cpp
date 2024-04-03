#include<bits/stdc++.h>
using namespace std;
//Reverse individual words
int main(){
   string s = "Geeks for Geeks";
   stack<char>st;
   string ans;
   for(int i = 0; i<s.length();i++){
    if(s[i]!=' '){
        st.push(s[i]);
    }
    else{
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        ans.push_back(' ');
    }

   }
   while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
    cout<<ans;
   
}
