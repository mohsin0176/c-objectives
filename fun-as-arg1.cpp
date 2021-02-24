#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int call(int inc (int var),int arg)
{
   return inc(arg);
} 

int inc(int var)
{
	return ++var;
}

int main()
{
	cout<<call(inc,8);
	return 0;
}