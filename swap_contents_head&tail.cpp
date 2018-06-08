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
   intsllnode(int x,intsllnode *p=NULL)
   {
   	info=x;
   	next=p;
   }
};
class intslllist
{
	public:
	intsllnode *head=NULL;
	intsllnode *tail=NULL;
	void add_element_head(int x)
 	{
 		if(head==NULL)
 		{
 			head=new intsllnode(x);
 			tail=head;
 			return;
 		}
 		head=new intsllnode(x,head);
 	}
 	void add_element_end(int x)
 	{
 		if(tail==NULL)
 			add_element_head(x);
 		else
 		{
 			tail->next=new intsllnode(x);
 			tail=tail->next;
 		}
 	}
 	void insert_sorted(int x)
 	{
 		if(head==NULL)
			add_element_head(x);
		else
		{
			intsllnode *temp=head;
			if(head->info>=x)
				{
				   add_element_head(x);
				   return;	
				}
	else
	  {
	  	int flag=0;
	  	intsllnode *pre;
			while(temp!=NULL)
			{

				if(temp->info>=x)
				{
                     
                     intsllnode *temp2=new intsllnode(x);
                     temp2->next=pre->next;
                     pre->next=temp2;
                     return;
				}
				pre=temp;
				temp=temp->next;
			}
			add_element_end(x);
		}
	  }	
 	}
 	void print_list()
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
 	void swap_node_data()
 	{
 		int temp;
 		temp=head->info;
 		head->info=tail->info;
 		tail->info=temp;
 	}
};
int main()
{
	intslllist list;
	list.insert_sorted(20);
	list.insert_sorted(40);
	list.insert_sorted(230);
	list.insert_sorted(11);
	list.insert_sorted(22);
	list.print_list();
	list.swap_node_data();
	list.print_list();
}