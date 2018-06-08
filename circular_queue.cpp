#include <bits/stdc++.h>
using namespace std;
class circular_q
{
	public:
  int back,front;
  int size;
  int *arr;
  circular_q(int x)
  {
  	front=-1;
  	back=-1;
  	arr=new int[x];
  }
  void enque(int value)
  {
  	if ((front == 0 && back== size-1) ||
            (back == front-1))
    {
        cout<<"queue is full"<<endl;
        return;
    }
 
    else if (front == -1) 
    {
        front = back = 0;
        arr[back] = value;
    }
 
    else if (back == size-1 && front != 0)
    {
        back = 0;
        arr[back] = value;
    }
 
    else
    {
        back++;
        arr[back] = value;
    }
  }
  int deque()
  {
  	 if (front == -1)
    {
        cout<<"queue is empty"<<endl;
        return INT_MIN;
    }
 
    int info = arr[front];
    arr[front] = -1;
    if (front == back)
    {
        front = -1;
        back = -1;
    }
    else if (front == size-1)
        front = 0;
    else
        front++;
 
    return info;
  }
  void displayqueue()
  {
  	 if (front == -1)
    {
        cout<<"empty queue"<<endl;
        return;
    }
    if (back>= front)
    {
        for (int i = front; i <= back; i++)
            cout<<arr[i]<<" ";
    }
    else
    {
        for (int i = front; i < size; i++)
            cout<<arr[i]<<" ";
 
        for (int i = 0; i <= back; i++)
            cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
};
int main()
{
    circular_q q1(5);
    q1.enque(142);
    q1.enque(212);
    q1.enque(113);
    q1.enque(-16);
    q1.displayqueue();
    cout<<"popped value "<<q1.deque()<<endl;
    cout<<"popped value "<<q1.deque()<<endl;
    q1.displayqueue();
 
    q1.enque(90);
    q1.enque(2);
    q1.enque(7);
 
    q1.displayqueue();
 
    q1.enque(11);
    return 0;

}