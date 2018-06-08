
//program to insert an element to a given position 
//Srijan Srivastav 101610086 COE-22.
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n1;
	int n2;
	cin>>n1>>n2;
	int ar1[n1];
	int ar2[n2];
	cout<<"enter the elements for array 1"<<endl;
	for(int i=0;i<n1;i++)
		cin>>ar1[i];  
	cout<<"enter the elements for array 2"<<endl;
	for(int i=0;i<n2;i++)
		cin>>ar2[i];
	sort(ar1,ar1+n1);//sorting the two arrays.
	sort(ar2,ar2+n2);
	vector<int> v1;//a vector(dynamic array) to merge the sorted array using following algo.
	int i=0;
	int j=0;
	while(i!=n1&&j!=n2)
	{
		if(ar1[i]>=ar2[j])
		{
			v1.push_back(ar2[j]);
			j++;
		}
		else{
			v1.push_back(ar1[i]);
			i++;
		}
	}
	while(i!=n1)
	{
		v1.push_back(ar1[i]);//when one of the sorted array's elements get finished we fil the remaining elements since no comparision is required.
		i++;
	}
	while(j!=n2)
	{
		v1.push_back(ar2[j]);
		j++;
	}
	for(int k=0;k<v1.size();k++)
	{
		cout<<v1[k]<<" ";  //printing the merged sorted arrays.
	}
}