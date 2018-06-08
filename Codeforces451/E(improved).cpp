#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check_square(long long v)
{
	long double check=v;
	double z=sqrt(check);
	if((z-floor(z))==0)
		return true;
	else
		return false;
}
int main()
{
	ll n;
	cin>>n;
	vector<ll> e,o;
	while(n--)
	{
		ll c;
		cin>>c;
		if(check_square(c))
			o.push_back(c);
		else
			e.push_back(c);
	}
//	cout<<e.size()<<" "<<o.size()<<endl;
	for(ll i=0;i<e.size();i++)
	{
		        ll f=floor(sqrt(e[i]));
                ll c=ceil(sqrt(e[i]));
                ll z=min(abs(e[i]-(f*f)),abs(e[i]-(c*c)));
                e[i]=z;
	}
	for(ll i=0;i<o.size();i++)
	{
		if(o[i]==0)
			o[i]=2;
		else
			o[i]=1;
	}
	sort(e.begin(),e.end());
	sort(o.begin(),o.end());
	ll moves=0;
	if(e.size()>o.size())
	{
        ll z=(e.size()-o.size());
        for(ll j=0;j<z/2;j++)
        {
        	moves=moves+e[j];
        }
	}
	else
	{
		ll z=(o.size()-e.size());
		for(ll j=0;j<z/2;j++)
		{
            moves=moves+o[j];
		}
	}
cout<<moves<<endl;
}
