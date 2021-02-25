#define limit 5
struct node
{
	int data;
	Node *lchild;
	Node *rchild;
};

Node *createNode(int);
void insertNode(Node *,Node *);
void inorder(Node *);
void insertNode(Node *nptr,Node *root)
{
	if(root !=NULL)
	{
		if(nptr->data->root->data)
		{
			if(root->rchild==NULL)
			{
				root->rchild=nptr;
				return;
			} 
			insertNode(nptr,root->rchild);

		}

		else if(nptr->data<root->data)
		{
			if(root->lchild==NULL)
			{
				root->lchild=nptr;
				return;
			}
			insertNode(nptr,root->lchild);
		}
	}
} 

Node *createNode(int item)
{
	Node *nptr=new Node();
	nptr->data=item;
	nptr->lchild=NULL;
	nptr->rchild=NULL;
	return nptr;
} 

void inorder(node *root)
{
	if(root==NULL){return ;}
	inorder(root->lchild);
	cout<<rott->data;
	inorder(root->rchild);
} 

int main()
{
	Node *root,*nptr,*tptr;
	root=NULL;
	for(int i=0;i<=limit;i++)
	{
		int item;
		cout<<item;
		cin>>item;
		nptr=createNode(item);
		if(root=NULL){root=nptr;}
		else{insertNode(nptr,root);}

	}
	inorder(root);
	return 0;
}