#include <bits/stdc++.h>
using namespace std;
int main()
{
	stack <int> even;
	stack <int> odd;
	int ar[30];
	for(int i=0;i<30;i++)
	{
		int x=rand()%100;
		ar[i]=x;
	}
	for(int i=0;i<30;i++)
	{
		if(ar[i]%2==0)
			even.push(ar[i]);
		else
			odd.push(ar[i]);
	}
	cout<<"the list of even elements in this random array are"<<endl;
	while(!even.empty())
	{
		cout<<even.top()<<" ";
		even.pop();
	}
	cout<<endl;
	cout<<"the list of odd elements in this random array are"<<endl;
	while(!odd.empty())
	{
		cout<<odd.top()<<" ";
		odd.pop();
	}

}