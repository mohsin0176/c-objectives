#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void display(int);

void display(int a)
{
	static int p;
	p++;
	p=6;
	cout<<a<<endl;
	cout<<p<<endl;
}

int main()
{ 
display(30);
display(40);
display(50);	
display(100);
display(200);
display(250);
	return 0;
}