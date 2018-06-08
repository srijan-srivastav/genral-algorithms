#include <bits/stdc++.h>
using namespace std;
int main()
{
	int money;
	int a;
	int b;
	cin>>money>>a>>b;
	int min=0;
	int max=0;
	if(a>b)
	{
		min=b;
		max=a;
	}
	else
	{
		min=a;
		max=b;
	}
	int countm=0;
	int countl=0;
	while(1)
	{
		money=money-min;
		countm++;
		if(money<0)
		{
			money=money+min;
			countm--;
			break;
		}
	}
	if(money==0)
	{
		if(min==a)
					{
						cout<<"YES"<<endl;
					cout<<countm<<" "<<countl<<endl;
		            }
		            else
		            {
		            	cout<<"YES"<<endl;
					 cout<<countl<<" "<<countm<<endl;
		            }
	}
	else
	{
		int flag=0;
		while(countm!=0)
		{
			money=money+min;
			countm--;
			if(money>=max)
			{
				money=money-max;
				countl++;
				if(money==0)
				{   
					flag=1;
					if(min==a)
					{
						cout<<"YES"<<endl;
					cout<<countm<<" "<<countl<<endl;
		            }
		            else
		            {
		            	cout<<"YES"<<endl;
					 cout<<countl<<" "<<countm<<endl;
		            }
					break;
				}
			}

		}
		if(flag==0)
			cout<<"NO"<<endl;

	}
}