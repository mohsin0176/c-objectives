#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{ 

    int i=0;
    for(i=0;i<20;i++)
    {
    switch(i)
    {
    	case 0: i+=5;
    	case 1: i+=2;
    	case 5: i+=4;
    	default: i+=4;
    	break;

    }
    cout<<i<<endl;
    }
	return 0;
}