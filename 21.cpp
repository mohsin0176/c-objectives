#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
int  main()
{  
	 union test
	 {
	 	int x;
	 	char y;
	 	float z;
	 };
	 struct test
	 {
	 	int x;
	 	char y;
	 	float z;
	 };
	 test a;
	 cout<<sizeof(a.x);
	 cout<<sizeof(a.y);
	 cout<<sizeof(a.z);


	return 0;
}