// C++ program to interleave the first half of the queue
// with the second half using queue
#include <bits/stdc++.h>
using namespace std;

// Function to interleave the queue
void interLeaveQueue(queue<int>& q)
{
	//yaha q me mere elements pdhe hai
    //condition case 
    if(q.size() %2 !=0) cout<<"enter even numbers"<<endl;
    int half = q.size()/2;
    //half queue ko new q m insert kro
    queue<int> nq;
    for(int i=0;i<half ; i++)
    {
        nq.push(q.front());
        q.pop();
    }
    //ab nq se vapis q me bardo
    while(!nq.empty())
    {
        q.push(nq.front());
        nq.pop();
        //ab q se pop krrenge
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
