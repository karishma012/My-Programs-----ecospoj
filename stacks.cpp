#include <bits/stdc++.h>
using namespace std;
class Stack{
//properties
public:
int *arr;
int top;
int size;

Stack(int size)
{
    this->size=size;
    arr=new int[size];
    top=-1;
}


void push(int x)
{
if(size-top > 1)
{
    top++;
arr[top]=x;
}
else
{
cout<<"stack overflow \n";
}
}
void pop()
{
if(top>=0)
top--;
else{
    cout<<"stack underflow \n";
}
}
int peek()
{
if(top>=0)
return arr[top];
else{
     cout << "Stack is Empty" << endl;
            return -1;
}
}
bool isEmpty()
{
      if(top==-1)
      {
        return true;
      }
      else{
        return false;
      }
}
};

int main()
{
Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
  st.pop();
  st.pop();
  st.pop();
  st.pop();
  
  
  if(st.isEmpty()) {
        cout << "Stack is Empty mere dost " << endl;
    }
    else{
        cout << "Stack is not Empty mere dost " << endl;
    }
}