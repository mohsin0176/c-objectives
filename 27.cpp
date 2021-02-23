#include<iostream>
#include<bits/stdc++.h>
int main()
{
	static int i=0;
	int j;
	for(j=0;j<10;j++)
	{
		i+=2;
		i-=j;
	} 
	cout<<i;
	return 0;
}