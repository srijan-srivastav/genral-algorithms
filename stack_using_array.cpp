#include <bits/stdc++.h>
using namespace std;
int cal=-1;
void push_ele(int ar[],int x,int z)
{
	if(cal==z-1)
	{
		cout<<"Stack Overflow"<<endl;
	
	}
	else
	{
             cal++;
	ar[cal]=x;
	
    }
}
void peek_ele(int ar[])
{
	cout<<ar[cal]<<endl;
}
void pop_ele(int ar[])
{
	if(cal<0)
		cout<<"Stack Underflow"<<endl;
	else
	{
	cal--;
    }
}
void print_stack_ar(int ar[])
{
	if(cal<0)
	{
		cout<<"Stack is empty"<<endl;
	}
	else
 {
	for(int i=0;i<=cal;i++)
	{
		cout<<ar[i]<<" ";
	}
	cout<<endl;
 }
}
void check_empty()
{
	if(cal<0)
     cout<<"Yes the stack is empty"<<endl;
}
int main()
{
	cout<<"enter size of stack"<<endl;
	int n;
	cin>>n;
	int ar[n];
	push_ele(ar,2,n);
	push_ele(ar,3,n);
	push_ele(ar,4,n);
	push_ele(ar,5,n);
	push_ele(ar,6,n);
	print_stack_ar(ar);
	peek_ele(ar);
	print_stack_ar(ar);
	pop_ele(ar);
	print_stack_ar(ar);
}