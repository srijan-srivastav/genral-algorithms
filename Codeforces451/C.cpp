#include <bits/stdc++.h>
using namespace std;
class contact
{
public:

  string name;
  int numbers;
  vector<string> phone;
};
void findsimilar( contact s[],int people)
{
	for(int z=0;z<people;z++)
  {
  	if(s[z].numbers==0)
  		continue;

	for(int i=0;i<s[z].phone.size()-1;i++)
	{
		for(int j=i+1;j<s[z].phone.size();j++)
		{
			if(s[z].phone[i]==s[z].phone[j])
			{
				s[z].phone.erase(s[z].phone.begin()+j);
				  s[z].numbers--;
			}
		}
	}
  }
}
void areacode(contact s[],int people)
{
	for(int z=0;z<people;z++)
  {
  	if(s[z].numbers==0)
  		continue;
	for(int i=0;i<s[z].phone.size();i++)
	{
		for(int j=0;j<s[z].phone.size();j++)
		{
			if(i==j)
				continue;
            if(s[z].phone[i].length()<s[z].phone[j].length())
            	continue;
            else
            {
               if(s[z].phone[i].substr(s[z].phone[i].length()-s[z].phone[j].length())==s[z].phone[j])
               {
               	  s[z].phone.erase(s[z].phone.begin()+j);
               	  s[z].numbers--;
               }
            }
		}
	}
  }
}
void club(contact s[],int people)
{
	for(int i=0;i<people-1;i++)
	{
		for(int j=i+1;j<people;j++)
		{
			if(s[i].name==s[j].name)
			{
				s[i].numbers=s[i].numbers+s[j].numbers;
				for(int k=0;k<s[j].phone.size();k++)
				{
					s[i].phone.push_back(s[j].phone[k]);
				}
				s[j].numbers=0;
			}
		}
	}
}
int main()
{
	int people;
	cin>>people;
	contact s[people];
	for(int i=0;i<people;i++)
	{
		cin>>s[i].name;
		cin>>s[i].numbers;
		for(int j=0;j<s[i].numbers;j++)
		{
			string x;
			cin>>x;
			s[i].phone.push_back(x);
		}
	}
	club(s,people);
	findsimilar(s,people);
	areacode(s,people);
	int count=0;
	for(int l=0;l<people;l++)
	{
		if(s[l].numbers!=0)
			count++;
	}
	cout<<count<<endl;
	areacode(s,people);
	for(int l=0;l<people;l++)
	{
		if(s[l].numbers!=0)
		{
			cout<<s[l].name<<" "<<s[l].numbers<<" ";
			for(int b=0;b<s[l].phone.size();b++)
			{
				cout<<s[l].phone[b]<<" ";
			}
			cout<<endl;
		}
		
	}

}


