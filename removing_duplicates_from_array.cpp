//program to delete all duplicate elements from one dimensional array
//srijan srivastav 101610086 COE-22
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int ar[]={5,4,5,7,1,9,1,5};//intital array
	int size=sizeof(ar)/sizeof(ar[0]);//size of array
	sort(ar,ar+size);//sorting the array
	int counter=0;//to count number of duplicates
		cout<<"initial array"<<endl;
	for(int i=0;i<size-1;i++)
	{  
	cout<<ar[i]<<" ";
		if(ar[i]==ar[i+1])
		{
			ar[i]=INT_MAX;//setting the max value for them
			counter++;//calculating number of duplicates
		}
	}
	cout<<endl;
   sort(ar,ar+size);//now all the duplicates will move to the end
   cout<<"the new array without duplicates"<<endl;
   for(int i=0;i<size-counter;i++)//now iterating without including duplicates
    cout<<ar[i]<<" ";//printing the array.
}