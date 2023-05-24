#include <iostream>
using namespace std;

int main() {
	// your code goes here
	// there are 26 alphabets
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0;
	    cin>>n;
        int maxi=max(maxi,count);
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++)
	    {
             maxi=max(maxi,count);
	        if(s!="a"||s!="e"||s!="i"||s!="o"||s!="u")
	        {
	            count ++;
	            
	        }
            else
            {
                count = 0;
            }
	        
	    }
        if(maxi>=4)
	        {
	            cout<<"NO\n";
	        }
	        else
	        {
	            cout<<"YES\n";
	        }
	}
	
	return 0;
}
