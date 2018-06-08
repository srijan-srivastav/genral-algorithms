#include <bits/stdc++.h>
using namespace std;
class cllnode
{
  public:
    int info;
    cllnode *next;
    cllnode()
    {
        next=NULL;
    }
    cllnode(int x,cllnode *p=0)
    {
        info=x;
        next=p;
    }
};
class clllist
{
public:
    cllnode *head=NULL;
    cllnode *tail=NULL;
    void add_at_head(int x)
    {
        if(head==NULL)
        {
            head=new cllnode(x);
            head->next=head;
            tail=head;
        }
        else
        {
            head=new cllnode(x,head);
            tail->next=head;
        }
    }
    void add_at_tail(int x)
    {
        if(tail==NULL)
        {
            add_at_head(x);
        }
        else
        {
        tail->next=new cllnode(x);
        tail=tail->next;
        tail->next=head;
        }
    }
    void print_list()
    {
       cllnode *temp=head;
       do
      {
        cout<<temp->info<<" ";
        temp=temp->next;
      }
       while(temp!=head);
    }
};
int main()
{
    clllist list;
    list.add_at_head(10);
     list.add_at_head(30);//insertion at head
      list.add_at_head(550);
       list.add_at_head(102);
       list.add_at_tail(69);//insertion at tail
      list.print_list();
}
