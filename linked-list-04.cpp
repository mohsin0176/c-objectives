#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	int key;
	int data;
	Node *next;

	Node()
	{
		key=0;
		data=0;
		next=NULL;
	} 

	Node(int k,int d)
	{
		key=k;
		data=d;
		next=NULL;
	}
};

class Stack
{
public:
	Node *top;
	Stack(){top=NULL;}
	bool isEmpty(){if(top==NULL){return true;}}
	else{return false;}
}

bool checkifNodeExist(Node *n)
{
	Node *temp=top;
	bool exist=false;
	while(temp!=NULL)
	{
		if(temp->key==n->key)
		{
			exist=true;
			break;
		}
		temp=temp->next;
	}
	return exist;
} 

void push(Node *n)
{
	if(top==NULL)
	{
		top=n;
		cout<<"Success"<<endl;
	} 
	else if(checkifNodeExist(n))
	{
		cout<<"Node Exist"<<endl;
		cout<<"Enter Different Key Value"<<endl;
	}
	else
	{
		Node *temp=top;
		top=n;
		n->next=temp;
		cout<<"Push Success"<<endl;
	}
}

Node *pop()
{
	Node *temp=NULL;
	if(isEmpty())
	{
		cout<<"Underflow"<<endl;
	} 
	else
	{
        temp=top;
        top=top->next;
        return temp;
	}
} 

Node *peek()
{
	if (isEmpty())
	{
		cout<<"Underflow"<<endl;
	} 
	else
	{
		return top;
	}
} 

int count()
{
	int count=0;
	Node *temp=top;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	} 
	return count;
} 

void display()
{
	cout<<"All Values in Stack"<<endl;
	Node *temp=top;
	while(temp!=NULL)
	{
		cout<<temp->key<<endl;
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	cout<<"Total Node"<<count();
} 

int main()
{
	Stack S1;
	int option,key,data;
	cin>>option;
	Node *new_node=new Node();
	cin>>key;
	cin>>data;
	new_node->key=key;
	new_node->data=data;
	S1.push(new_node);
	new_node=S1.pop();
	cout<<"Top Of Stack"<<new_node->key<<new_node->data<<endl;
	delete new_node;
	if(S1.isEmpty())
	{
		cout<<"Empty"<<endl;
	}
	else
	{
		cout<<"Not Empty"<<endl;
	} 
	if(S1.isEmpty())
	{
		cout<<"Stack Empty"<<endl;
	} 
	else

	{
		new_node=S1.peek();
		cout<<"Top of Stack"<<new_node->key<<new_node->data<<endl;
	}

	cout<<"No of Nodes"<<S1.count()<<endl;
	S1.display();
	return 0;
}