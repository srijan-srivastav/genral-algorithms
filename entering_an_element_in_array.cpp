

//program to insert an element to a given position 
//Srijan Srivastav 101610086 COE-22.


#include <bits/stdc++.h>
using namespace std;
int g_size=0;//global variable to hold the new size after each insertion
void enter_element_at_position(int ar[],int pos,int val)
{
    for(int i=g_size;i>pos-1;i--)
    {
    	ar[i]=ar[i-1];
    }
    ar[pos-1]=val;
    g_size++;//incrementing size of array after insertion
}
void print_array(int ar[])
{
	cout<<"final array after insertion is "<<endl;
	for(int i=0;i<g_size;i++)
		cout<<ar[i]<<" ";
}
int main()
{
	int ar[10];//creating an array of size 10
	cout<<"intital array is "<<endl;
	for(int i=0;i<5;i++)
	{
		int x=rand()%100;//filling let's say 5 elements with random numbers.
		ar[i]=x;
		cout<<ar[i]<<" ";
	}
	g_size=5;
	cout<<endl;
	cout<<"enter at which position you want to enter a new element"<<endl;
	int y;
	cin>>y;
	cout<<"you entered an element at "<<y<<"th position"<<" now enter what you want to be inserted at"<<y<<" th position"<<endl;
	int z;
	cin>>z;
	enter_element_at_position(ar,y,z);
	print_array(ar);
}