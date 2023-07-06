#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (toLowerCase(a[s]) != toLowerCase(a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}
int main()
{
    char name[20];

    cout << "Enter your name " << endl;
    cin >> name;
    // name[2] = '\0';

    cout << "Your name is ";
    cout << name << endl;
    int len = getLength(name);
    cout << " Length: " << len << endl;

    cout << " Palindrome or Not: " << checkPalindrome(name, len) << endl;
}
// Program to Remove all Characters in a String Except Alphabets
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      string temp = "";
//      string line;
//      cout << "Enter a String: \n";
//      cin >> line;

//     for (int i = 0; i < line.size(); i++)
//     {
//         if(line[i]>='a' && line[i]<='z' || line[i]>='A' && line[i]<='Z'){
//             temp+=line[i];
//         }
//     }
//     cout<<"updated string is: \n"<<temp;
// }
/*#include <iostream>
using namespace std;
int main()
{
    string text;
    cout << "Enter a String: \n";
    getline(cin, text);
    int ctr = 0;
    for (int x = 0; x < text.length(); x++)
    {
        if (text[x] == ' ')
            ctr++;
    }

    cout << ctr + 1 << endl;
}*/