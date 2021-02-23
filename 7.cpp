#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={5,10,15,20,3};
    int i,j,m;
    i=++a[0];
    j=a[0]++;
    m=a[i++];
    cout<<i<<endl;
    cout<<j<<endl;
    cout<<m<<endl;
	return 0;
}