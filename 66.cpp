#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void func()
{
	int x=0;
	static int y=0;
	x++;
	y++;
	cout<<x<<endl;
	cout<<y<<endl;
}
int main()
{ 
	func();
	func();
	return 0;
}