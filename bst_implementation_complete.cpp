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
void max_node(bstnode *root)
{
	if(root==NULL)
	{
		cout<<"empty tree"<<endl;
	}
	else if(root->right==NULL)
	{
		cout<<root->data<<endl;
	}
	else
	{
		max_node(root->right);
	}
}
void min_node(bstnode *root)
{
	if(root==NULL)
	{
		cout<<"empty tree"<<endl;
	}
	else
	{
		while(root->left!=NULL)
		{
			root=root->left;
		}
		cout<<root->data<<endl;
	}
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
void post_order(bstnode *root)
{
	if(root==NULL)
	{
		return;
	}
	post_order(root->left);
	post_order(root->right);
	cout<<root->data<<" ";
}
void pre_order(bstnode *root)
{
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	pre_order(root->left);
	pre_order(root->right);

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
void search_node(bstnode *root,int x)
{
	if(root==NULL)
	{
		cout<<"element not found"<<endl;
		return;
	}
	else if(root->data==x)
	{
		cout<<"element found"<<endl;
		return;
	}
	else if(x>root->data)
	{
		search_node(root->right,x);
	}
	else
	{
		search_node(root->left,x);
	}
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
    int z=height_of_tree(root);
    cout<<z<<endl;
	max_node(root);
	min_node(root);
	post_order(root);
	cout<<endl;
    search_node(root,25);
    delete_node(root);
    post_order(root);
}