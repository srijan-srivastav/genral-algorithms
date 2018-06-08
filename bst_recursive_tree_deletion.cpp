#include <bits/stdc++.h>
using namespace std;
class bstnode
{
public:
	int data;
	bstnode *left;
	bstnode *right;
	bstnode(int x)
	{
		left=NULL;
		right=NULL;
		data=x;
	}
};
bstnode* insert_node(bstnode *root,int x)
{
	if(root==NULL)
	{
		root=new bstnode(x);
		return root;
	}
	else if(root->data<=x)
	{
		root->right=insert_node(root->right,x);
		return root;
	}
	else
	{
		root->left=insert_node(root->left,x);
		return root;
	}
	 
}
void in_order(bstnode *root)
{
	if (root==NULL)
	{
		return;
	}
	in_order(root->left);
	cout<<root->data<<" ";
	in_order(root->right);
}
void delete_node(bstnode *root)
{
	if(root==NULL)
		return;
	delete_node(root->left);
	delete_node(root->right);
	delete(root);
}
int main()
{
	bstnode *root=NULL;
	root=insert_node(root,15);
	insert_node(root,13);
	insert_node(root,18);
	insert_node(root,12);
	insert_node(root,14);
	insert_node(root,17);
	insert_node(root,19);
	in_order(root);
	cout<<endl;
	delete_node(root);//tree deletion
	cout<<"entire tree deleted"<<endl;
}