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
int height_of_tree(bstnode *root)
{
	if(root==NULL)
	{
		return -1;
	}
	else
	{
	int x =height_of_tree(root->left);
	int y=height_of_tree(root->right);
	return(max(x,y)+1);
    }
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
	cout<<"inorder traversal of the tree "<<endl;
	in_order(root);
	cout<<endl;
	int z=height_of_tree(root);//tree deletion
	cout<<"height of the tree is = "<<z<<endl;
}