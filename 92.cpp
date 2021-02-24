#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{ 
    
    int x=2;
    int y=0;
    int z=(y++)?y==1&&x:0;
    cout<<z;
 
	return 0;
}