

//program to insert an element to a given position 
//Srijan Srivastav 101610086 COE-22.
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
 	bool is_empty()
 	{
 		if(head==NULL)
 			return true;
 		else
 			return false;
 	}

 	void delete_from_head()
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
 	void delete_from_tail()
 	{
 	   if(is_empty())
 			cout<<"List is empty"<<endl;
 		else
 		{
 			intsllnode *tmp=head;
 			while(tmp->next!=tail)
 			{
 				tmp=tmp->next;
 			}
 		   tail=tmp;
 		   tail->next=NULL;
 		}
 	}
 	void delete_between(int x)
 	{
 		intsllnode *search=head;
 		intsllnode *presearch;
 		while(search!=NULL)
 		{
 			if(search->info==x&&search==head)
 			{
                delete_from_head();
                return;
 			}
 			else if(search->info==x&&search->next==NULL)
 			{
 				delete_from_tail();
 				return;
 			}
 			else if(search->info==x)
 			{
 				presearch->next=search->next;
 				delete search;
 				return;
 			}
 			presearch=search;
 			search=search->next;
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
};
int main()
{
  intsllist list;
  list.add_element_head(40);
  list.add_element_head(30);
  list.add_element_head(20);
  list.add_element_end(50);
  list.insert_sorted(60);
  list.print_list();
  list.delete_between(30);//deleting element in sorted manner.
  list.print_list();
	return 0;
}