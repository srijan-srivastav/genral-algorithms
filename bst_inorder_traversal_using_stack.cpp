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
void inorderIterative( bstnode *root)
{
	stack<bstnode*> stack;
	bstnode *curr = root;

	while (!stack.empty() || curr != nullptr)
	{
	   
		if (curr != nullptr)
		{
			stack.push(curr);
			curr = curr->left;
		}
		else
		{
           
			curr = stack.top();
			stack.pop();
			cout << curr->data << " ";

			curr = curr->right;
		}
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
	cout<<"inorder traversal using stack"<<endl;
	inorderIterative(root);
}