#include <bits/stdc++.h>
using namespace std;
char getMaxOccCharacter(string s) {

    

}
char tolowercase(char ch)
{
    if(ch>='a'&&ch<='z')
    {
        return ch;
    }
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}
bool checkpalindrome(char arr[],int n)
{
    int s=0,e=n-1;
    while(s<=e)
    {
        if( tolowercase(arr[s]) != tolowercase(arr[e]) )
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
void getreverse(char arr[],int n)
{
int s=0, e=n-1;
while(s<=e)
{
    swap(arr[s++],arr[e--]);
}

}
int getlength(char arr[])
{
    int count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    // char name[20];
    // cin>>name;
    // cout<<"length is  "<<getlength(name)<<endl;

    // int n=getlength(name);
    // getreverse(name,n);
     
    // cout << "Your name is ";
    // cout << name << endl;
    
    //  cout <<" Palindrome or Not: " << checkpalindrome(name, n) << endl;
    string s;
   cin >> s;

    cout << getMaxOccCharacter(s) << endl;

    return 0;

}