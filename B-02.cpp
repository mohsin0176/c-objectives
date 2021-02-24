#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int compare(int a,int b)
{
	if(a>b){ return -1;}
	else   { return 1; }
} 

void bubblesort(int *A,int n,int (*compare)(int int))
{
	int i,j,temp;
	for(i=0;j<n-1;j++)
	{
		for(j=0;j<n-1;j++)
		{
			if(comapre(A[j],A[j+1])>0)
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
} 

int main()
{
	int i,A[]={-31,22,-1,50,-6,4};

	bubblesort(A,6,compare);
	for(i=0;i<6;i++)
	{
		cout<<A[i]<<endl;
	}
	return 0;
}