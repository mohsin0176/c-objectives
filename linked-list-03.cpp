#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class StackNode
{
public:
	int data;
	StackNode  *next;
}

StackNode *newnode(int data)
{
	StackNode *StackNode=new StackNode();
	StackNode->data=data;
	StackNode->next=NULL;
	return StackNode;
}

int isEmpty(StackNode *root)
{
	return !root;
} 

void push(StackNode **root,int data)
{
	StackNode *StackNode=new Node(data);
	StackNode->next=*root;
	*root=StackNode;
	cout<<data<<"Pushed To Stack"<<endl;

} 

int pop(StackNode **root)
{
	if (isEmpty(*root))
	{
		return INT_MIN;
	} 
	else
	{
		StackNode *temp=*root;
		*root=(*root)->next;
		int popped=temp->data;
		free(temp);
		return popped;
	}

} 

int peek(StackNode **root)
{
	if (isEmpty(*root))
	{
		return INT_MIN;
	} 
	else
	{
		return root->data;
	}
}

int main()
{
	StackNode *root=NULL;
	push(&root,10);
	push(&root,20);
	push(&root,30);
	cout<<pop(&root)<<"Popped From Stack"<<endl;
	cout<<"Top Element is"<<peek(root)<<endl;
	return 0;
}