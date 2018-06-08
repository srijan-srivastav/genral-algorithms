#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	
	map <string,set<string>> phone;
	while(n--)
	{
		string s;
	     cin>>s;
		long long k;
		cin>>k;
		while(k--)
		{
			string number;
			cin>>number;
           phone[s].insert(number);
		}
	}
	for(map<string,set<string>>::iterator p=phone.begin();p!=phone.end();p++)
	{
		set<string> dummy=p->second;
		for(set<string>::iterator d=dummy.begin();d!=dummy.end();d++)
		{
			for(long long len=1;len<(*d).size();len++)
			{
				if((*p).second.count((*d).substr(len)))
				{
					(*p).second.erase((*d).substr(len));
				}
			}
		}
	}
	cout<<phone.size()<<endl;
	for(map<string,set<string>>::iterator p=phone.begin();p!=phone.end();p++)
	{
		cout<<p->first<<" "<<(*p).second.size()<<" ";
		for(set<string>::iterator d=((*p).second.begin());d!=((*p).second.end());d++)
		{
			cout<<*d<<" ";
		}
  cout<<endl;

	}
}