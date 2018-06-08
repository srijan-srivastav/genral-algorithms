#include <bits/stdc++.h>
using namespace std;

class dllnode
{
    public:
      int info;
      dllnode *next;
      dllnode *prev;
      dllnode(int x,dllnode* p=NULL,dllnode *n=NULL)
      {
        info=x;
        prev=p;
        next=n;
      }
      dllnode()
      {
           next=NULL;
           prev=NULL;
      }
};

class listdll
{
  public:
    dllnode *head=NULL;
    dllnode *tail=NULL;
    void add_element(int x)
    {
      if(head==NULL)
      {
        head=new dllnode(x);
        tail=head;
        return;
      }
      
      tail->next=new dllnode(x);
      tail->next->prev=tail;
      tail=tail->next;
     
    }
    void print_reverse()
    {
      dllnode *tmp=tail;
      while(tmp!=NULL)
      {
        cout<<tmp->info<<" ";
        tmp=tmp->prev;
      }
      free(tmp);
      cout<<endl;
    }
  
    void head_val()
    {
      cout<<head->next->info<<endl;
    }
    void delete_element(int x)
    {
      dllnode *tmp=head;
      dllnode *previous;
      while(tmp->info!=x)
      {
        previous=tmp;
        tmp=tmp->next;
      }
      previous->next=tmp->next;
      tmp->next->prev=previous;
    }
    void print_forward()
    {
      dllnode *print=head;
      while(print!=NULL)
      {
        cout<<print->info<<" ";
        print=print->next;
      }
      cout<<endl;
    }
};
int main()
{
  listdll list;
  list.add_element(10);
  list.add_element(20);
  list.add_element(30);
  list.print_forward();//printing forward
  list.print_reverse();//print in reverse order
  list.delete_element(20);//delete element 20
  list.print_forward();
  
  return 0;
}