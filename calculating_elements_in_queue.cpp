#include <bits/stdc++.h>
using namespace std;
int main()
{
	queue <int> q;
	int x;
	cout<<"enter the number of elements you want to enter"<<endl;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		int z=rand()%1000;
		q.push(z);
	}
	cout<<"calculating the number of elements by poping and counting"<<endl;
	int counter=0;
	while(!q.empty())
	{
      q.pop();
      counter++;
	}
	cout<<endl;
	cout<<"the number of elements in the queue are = "<<counter<<endl;
}