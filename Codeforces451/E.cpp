#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	vector<long long> o,s;
	while(n--)
	{
		long long x;
		cin>>x;
		long long c=floor(sqrt(x));
		long long d=ceil(sqrt(x));
		if(c==d)
		{
           s.push_back(x);
		}
		else
		{
			o.push_back(x);
		}
	}
	long long counter=0;
	while(1)
	{
		if(s.size()==o.size())
		{
			break;
		}
		else if(s.size()>o.size())
		{
                    int minz=100000;
                    int x=0;
			for(int i=0;i<s.size();i++)
			{
                if(s[i]==0)
                {
                	minz=2;
                	x=i;
                }
                else
                {
                	minz=1;
                	x=i;
                	break;
                }
			}
			counter=counter+minz;
			o.push_back(s[x]+minz);
			s.erase(s.begin()+x);
		}
		else
		{
			int a=0;
			int minm=100000;
			for(int j=0;j<o.size();j++)
			{
                long long f=floor(sqrt(o[j]));
                long long c=ceil(sqrt(o[j]));
                long long z=min(abs(o[j]-(f*f)),abs(o[j]-(c*c)));
                if(minm>z)
                {
                	minm=z;
                    a=j;
                }
			}
			    long long f=floor(sqrt(o[a]));
                long long c=ceil(sqrt(o[a]));
                int flag=0;
                if(abs(o[a]-(c*c))<(abs(o[a]-(f*f))))
                {
                	flag=1;
                }
                long long z=min(abs(o[a]-(f*f)),abs(o[a]-(c*c)));
                if(flag==1)
                {
            s.push_back(o[a]-z);
            }
            else
            {
            	s.push_back(o[a]+z);
            }
            o.erase(o.begin()+a);
			counter=counter+minm;
		}
	}
	cout<<counter<<endl;
}