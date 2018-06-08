#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int size)
{
	int min, temp;
	for (int i = 0; i < size; i++)
	{
		min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}
void print_sorted(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int ar[]={3,9,4,1,8,2};
	cout<<"intital array is = "<<endl;
	print_sorted(ar,6);
	selectionSort(ar,6);
	cout<<endl;
	cout<<"final sorted array is = "<<endl;
	print_sorted(ar,6);
}