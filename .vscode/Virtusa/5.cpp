#include <bits/stdc++.h>
using namespace std;
//Problem Statement Write a function to remove all duplicate characters from a given string.Note: The duplicate elements are to be removed in such a way that when reading the string fromleft to right, therepeated element which occurs later should be removed.Input Format Input contains a string.Output Format Return a string with non-duplicate characters, i.e if you have a string as mettl then output shouldbe metl, keepingthe order of characters same
int main()
{
    string s = "mettl";
    map<char , int>mp;
    string ans;
    for(int i = 0 ; i<s.length() ; i++){
        if(mp[s[i]]){
            continue;
        }
        else{
            mp[s[i]]++;
            ans.push_back(s[i]);
        }
    }
    
    cout<<ans;
    return 0;
}
