#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int *ar,int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(ar[j+1]<ar[j])
			{
				int temp=ar[j+1];
				ar[j+1]=ar[j];
				ar[j]=temp;
			}
		}
	}
}
int main()
{
 int ar[]={5,3,1,6,9,4};
 bubble_sort(ar,6);
 for(int i=0;i<6;i++)
 	cout<<ar[i]<<" ";
}