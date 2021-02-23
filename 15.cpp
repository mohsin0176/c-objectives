#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
int  main()
{  
	 
    char a[]="Hello World";
    char *p;
    p=a;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(p)<<endl;
    cout<<strlen(a)<<endl;
    cout<<strlen(p)<<endl;
	return 0;
}