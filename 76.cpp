#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct marks
{
int p:3;
int c:3;
int m:2;
};
int main()
{ 

	struct marks s={2,6,-5}; 
	cout<<s.p<<endl;
	cout<<s.c<<endl;
	cout<<s.m<<endl;
	return 0;
}