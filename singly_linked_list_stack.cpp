#include <bits/stdc++.h>
using namespace std;
class intsllnode
{
public:
	int info;
	intsllnode *next;
	intsllnode()
	{
		next=NULL;
	}
	intsllnode(int x,intsllnode *p=0)
	{
		info=x;
		next=p;
	}
};
class intsllist
{
 public:
 	intsllnode *head=NULL;
 	intsllnode *tail=NULL;
 	void push_element(int x)
 	{
 		if(head==NULL)
 		{
 			head=new intsllnode(x);
 			tail=head;
 			return;
 		}
 		head=new intsllnode(x,head);
 	}
 	bool is_empty()
 	{
 		if(head==NULL)
 			return true;
 		else
 			return false;
 	}

 	void pop_element()
 	{
 		if(is_empty())
 			cout<<"List is empty"<<endl;
 		else
 		{
 		intsllnode *tmp=head;
 		head=head->next;
 		free(tmp);
 	    }
 	}
 	void print_stack()
 	{
 		intsllnode *p=head;
 		while(p!=NULL)
 		{
 			cout<<p->info<<" ";
 			p=p->next;
 		}
 		free(p);
 		cout<<endl;
 	}
 	void peek_top()
 	{
 		if(is_empty())
 			cout<<"stack is empty"<<endl;
 		else
 			cout<<head->info<<endl;
 	}
};
int main()
{
	intsllist list;
	list.push_element(10);
	list.push_element(20);
	list.push_element(30);
	list.push_element(40);
	list.print_stack();
	list.pop_element();
	list.print_stack();
	list.peek_top();
	return 0;
}