#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int *a,int size)
{
	for(int i=0;i<size;i++)
	{
		int hole=i;
		int value=a[i];
		while(hole>0&&a[hole-1]>value)
		{
			a[hole]=a[hole-1];
			hole--;
		}
		a[hole]=value;
	}
}
int main()
{
	int ar[]={4,3,2,9,6,1};
	insertion_sort(ar,6);
	for(int i=0;i<6;i++)
	{
		cout<<ar[i]<<" ";
	}
}