#include <bits/stdc++.h>
using namespace std;
int main()
{
	queue <char> q;
	stack <char> s;
	string st;
	cout<<"enter a string you want to reverse using queue"<<endl;
	cin>>st;
	for(int i=0;i<st.length();i++)
		q.push(st[i]);
	while(!q.empty())
	{
		s.push(q.front());
		q.pop();
	}
	cout<<"initial string was = "<<st<<endl;
	cout<<"final reversed string is = ";
	while(!s.empty())
	{
		cout<<s.top();
		s.pop();
	}
}