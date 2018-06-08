
//program to insert an element to a given position 
//Srijan Srivastav 101610086 COE-22.

#include <bits/stdc++.h>
using namespace std;
void binary_search(int ar[],int x)
{
	int low=0;
	int high=9;
	int mid=((low+high)/2);
	sort(ar,ar+10);
	while(high>=low)
	{
		if(ar[mid]==x)
		{
			cout<<"element found"<<endl;
			return;
		}
		else if(ar[mid]<x)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
		mid=((low+high)/2);
	}
   cout<<"element not found"<<endl;
   return;
}
int main()
{
	int ar[10];
	for(int i=0;i<10;i++)
	{
		int x=rand()%100;
		ar[i]=x;
	}
    cout<<"enter element you want to be searched"<<endl;
   int x;
   cin>>x;
   binary_search(ar,x);
}
