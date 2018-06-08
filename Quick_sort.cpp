#include <bits/stdc++.h>
using namespace std;
int partition_index(int *ar,int start,int end)
{
	int pivot=ar[end];
	int p_index=start;
	for(int i=start;i<=end;i++)
	{
		if(ar[i]<=pivot)
		{
			int temp=ar[i];
			ar[i]=ar[p_index];
			ar[p_index]=temp;
			p_index++;
		}
	}
		p_index--;
	   return p_index;
}
void quick_sort(int *ar,int start,int end)
{
	if(start<end)
	{
		int part_ind=partition_index(ar,start,end);
			quick_sort(ar,start,part_ind-1);
            quick_sort(ar,part_ind+1,end);
	}
	
}
int main()
{
	int ar[8];
	cout<<"enter 8 elements in random order "<<endl;
	for(int i=0;i<8;i++)
	{
		cin>>ar[i];
	}
	quick_sort(ar,0,7);
	for(int i=0;i<8;i++)
	{
		cout<<ar[i]<<endl;
	}
	
	
}