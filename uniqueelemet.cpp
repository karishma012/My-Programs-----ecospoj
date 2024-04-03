//NAIVE APPROACH
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;
    vector<int> v;
    int arr[6] = {1, 2, 2, 1, 1, 3};

    for (int i = 0; i < 6; i++)
    {
        mp[arr[i]]++;
    }
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
         v.push_back(i->second);
    }
    bool result = true;
    for (int i = 0; i < v.size();i++){
        if(v[i] == v[i+1]){
            result = false;
            break;
        }
    }
    if(result == true){
        cout<<"unique"<<endl;
    }
    else{
        cout<<"not unique"<<endl;
    }
}