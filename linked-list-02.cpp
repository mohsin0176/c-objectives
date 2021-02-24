#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
};

void insertEnd(struct Node **start,start,int value)
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
	new_node->data=value;
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
		cout<<temp->data;
		temp=temp->next;

	}

	cout<<temp->data;
	Node *last=start->prev;
	temp=last;
	while(temp->prev != last)
	{
		cout<<temp->data;
		temp->prev;
	} 

	cout<<temp->data;
} 

int main()
{
	struct Node *start=NULL;
	insertEnd(&start,10); 
	insertEnd(&start,15);
    insertEnd(&start,25);
    display(start);
	return 0;
}