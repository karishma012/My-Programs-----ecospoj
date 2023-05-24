#include <bits/stdc++.h>
using namespace std;
void print(int *p)
{
    cout<<*p<<endl;
}
void update(int *p)
{
    cout<<*p+1<<endl;
}
void getsum(int *arr,int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
}
int main()
{
    // int arr[3]={2,5,1};
    // cout<<arr<<endl;
    // cout<<&arr[0]<<endl;
    // int i=3;
    // cout<<*(1+arr)<<endl;
    // cout<<*(arr+1)<<endl;
    // // cout<<sizeof(*arr)<<endl;
    // int *p=&arr[0];
    // cout<<*p+1<<endl;
    // // int num=2;
    // // int *ptr=&num;
    // // cout<<sizeof(ptr)<<endl;
    // // cout<<sizeof(&num+1)<<endl;
    // //CHARACTER ARRAYS....
    // // char ch[6]="abcde";
    // // cout<<ch<<endl;
    // // char *c=&ch[0];
    // // cout<<*(c+1)<<endl;
    // char temp = 'z';
    // char *pt = &temp;

    // cout << pt << endl;
    // int num=2;
    // int *p=&num;
    // print(p);
    // update(p);
    // int arr[3]={2,5,1};
    // getsum(arr+2,1);
    int i=5;
    int *num=&i;
    int **num2=&num;
    cout<<&i<<endl;
    cout<<&num<<endl;
    cout<<&num2<<endl;
}