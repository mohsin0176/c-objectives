#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int compare(const void *a,const void *b)
{
	int A=*((int *)a);
	int B=*((int *)b);
	return A-B;
}

int main()
{
	int i,A[]={-31,22,-1,50,-6,4};
	qSort(A,6,sizeof(int),compare);
	for(i=0;i<6;i++)
	{
		cout<<A[i]<<endl;
	}
	return 0;
}