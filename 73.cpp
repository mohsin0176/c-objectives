#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int call(int address)
{
	address++;
	return address;
}
int main()
{ 

	static main;
	int x;
	x=call(main);
	cout<<x;

	return 0;
}