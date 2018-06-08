

//program to delete an element from a given position 
//Srijan Srivastav 101610086 COE-22.


#include <bits/stdc++.h>
using namespace std;
int g_size=0;//global variable to handle size after each operation
void delete_element_from_position(int ar[],int x,int g_size)
{
   for(int y=x-1;y<g_size-1;y++)
   {
   	 ar[y]=ar[y+1];//shifting elements after deletetion
   }
   g_size--;//decrementing size of array after deletetion
}
void print_array(int ar[],int g_size)
{
	for(int i=0;i<g_size-1;i++)
	{
		cout<<ar[i]<<" ";
	}
	
}

int main()
{
	int ar[]={1,6,4,7,9,3,5};//let this be the initial array
	int size=sizeof(ar)/sizeof(ar[0]);//calculatiing size of array
	g_size=size;
	int x=0;
	cout<<"initial array is "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<ar[i]<<" ";
	}
	cout<<endl;
	cout<<"enter the position of element you want to delete"<<endl;
	cin>>x;
	cout<<"you entered "<<x<<"rd element"<<endl;
	delete_element_from_position(ar,x,g_size);
	cout<<"final array after deletion"<<endl;
     print_array(ar,g_size);

}