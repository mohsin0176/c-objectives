#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int call(int (*func) (int var),int arg)
{
   return func(arg);
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