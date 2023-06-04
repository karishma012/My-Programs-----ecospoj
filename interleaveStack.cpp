// C++ program to interleave the first half of the queue
// with the second half
#include <bits/stdc++.h>
using namespace std;

// Function to interleave the queue
void interLeaveQueue(queue<int>& q)
{
	// To check the even number of elements
	if (q.size() % 2 != 0)
		cout << "Input even number of integers." << endl;

	// Initialize an empty stack of int type
	stack<int> s;
	int half = q.size() / 2;
    //half elements ko mai stack me push karungi
     for(int i=0;i<half ; i++)
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    //reverse hoga sab
    for(int i=0 ; i<half ; i++)
    {
        q.push(q.front());
        q.pop();
    }
	//vapis first half ko stack me daalo
    for(int i = 0 ;i< half; i++)
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
        q.push(q.front());
        q.pop();
    }
}

// Driver program to test above function
int main()
{
	queue<int> q;
	q.push(11);
	q.push(12);
	q.push(13);
	q.push(14);
	q.push(15);
	q.push(16);
	q.push(17);
	q.push(18);
	q.push(19);
	q.push(20);
	interLeaveQueue(q);
	int length = q.size();
	for (int i = 0; i < length; i++) {
		cout << q.front() << " ";
		q.pop();
	}
	return 0;
}
