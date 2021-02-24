#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
};

void insert(struct Node **start,int data)
{
	if(*start==NULL)
	{
		struct Node *new_node=new Node();
		new_node->data=data;
		new_node->next=new_node->prev=new_node;
		*start=new_node;
		return;
	} 

	Node *last=(*start)->prev;
	struct Node *new_node=new Node();
	new_node->data=data;
	new_node->next=*start;
	(*start)->prev=new_node;
	new_node->prev=last;
	last->next=new_node;
}

void display(struct Node *start)
{
	struct Node *temp=start;

	
	while(temp->next!=start)
	{
		cout<<temp-data;
		temp=temp->next;
	};

	cout<<temp->data;
} 

int main()
{

	struct Node *start=NULL;

	insert(&start,4);
	insert(&start,5);
	insert(&start,10);
	insert(&start,20); 

	display(start);
	return 0;
}