#include<iostream>
using namespace std;

class kQueue {
    int n;
    int k;
    //k is the no. of queues in an array
    int *front;
    int *rear;
    int *arr;
    int *next;
    int freeSpot;
    public:
    kQueue(int n , int k)
    {
        this -> n = n;
        this -> k = k;
        front = new int [k];
        rear = new int [k];
        for(int i=0 ; i<k ; i++)
        {
            front[i]= -1;
            rear[i] = -1;
        }
        for (int i=0 ; i<n ;i++)
        {
            next[i] = i+1;
        }
        next[n-1] = -1;
        arr = new int [n];
        freeSpot = 0;

    }
    void enqueue( int data , int qn)
    {
        //check if overflow
        if(freeSpot == -1)
        {
            cout << "overflow "<<endl;
            return;
        }
         int index = freeSpot;
         freeSpot = next[index];

         //enter first element

         if(front[qn-1]==-1) //is empty
         {
            front[qn-1] = index;
         }
         else{
            //make a connection
            next[rear[qn-1]] = index;
         }

         next[index] = -1;
         rear[qn-1] = index;
         arr[index] = data;
    }

    int dequeue(int qn)
    {
        //isempty
        if(front[qn-1]==-1)
        {
            cout<<"empty "<<endl;
            return -1;
        }
        int index = front[qn-1];
        //front me vapis -1 daldo kyuki usko pop krna hai na to khali space ddo
        front[qn-1] =  next[index];
        //connections banao
        next[index] = freeSpot ; 
        freeSpot = index;
        return arr[index];
    }
};
int main() {

    kQueue q(10, 3);
    q.enqueue(10, 1);
    q.enqueue(15,1);
    q.enqueue(20, 2);
    q.enqueue(25,1);

    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;

    cout << q.dequeue(1) << endl;

    return 0;
}
