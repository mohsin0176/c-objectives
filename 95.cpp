#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{ 

    int i=10;
    static int x=i;
    if(x==i)
    {
    	cout<<"Equal"<<endl;
    } 
    else if(x>i)
    {
    	cout<<"Greater Than"<<endl;
    } 
    else
    {
    	cout<<"Less Than"<<endl;
    }
	return 0;
}