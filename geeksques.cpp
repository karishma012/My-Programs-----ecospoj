#include <iostream>
using namespace std;

int main()
{
    string sentence;
    cout<<"enter\n";
    cin>>sentence;
    int n=sentence.size();
   
    if(n!=26)
    {
        cout<< "false\n";
    }
    else{
        cout<< "true\n";
    }
    
}