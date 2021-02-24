#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{ 
	int a[]={6,2,8,4,9},*p,n;
	p=a+2;
	n=*p;
	cout<<n<<endl;// 8 //p=a2 
	n=*++p;
	cout<<n<<endl;// 4 //p=a3
	n=*(--p);
	cout<<n<<endl;// 8 //p=a3
	n=*(p--);
	cout<<n<<endl;// 8 //p=a3
	n=++(*p);
	cout<<n<<endl;// 3 //p=a
	n=--*p;
	cout<<n<<endl;// 2 //p=a
	n=*(++p);
	cout<<n<<endl;// 8 //p=a3
	return 0;
}