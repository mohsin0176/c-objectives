#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{ 

    int y=1;
    int x=0;
    int l=(y++,x++)?y:x;
    cout<<l;
	return 0;
}