#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{ 

    char p[]="IIT";
    char t;
    int i,j;
    for(i=0,j=strlen(p);i<j;i++)
    {
    	t=p[i];
    	p[i]=p[j-i];
    	p[j-i]=t;
    } 
    cout<<p;
	return 0;
}