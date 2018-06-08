#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x=n;
	int count=0;
	while(n!=0)
	{
		x=x/10;
		count++;
	}
	if(n%10==0)
		cout<<n<<endl;
	else if(n%10<=5)
		{
			n=n/10;
			n=n*10;
			cout<<n<<endl;
		}
		else
		{
			int c=10-n%10;
			n=n+c;
			cout<<n<<endl;
		}
}