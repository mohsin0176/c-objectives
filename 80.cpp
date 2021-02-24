#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{ 

    int a[5]={1,2,3,4,5};
    int i;
    for(i=0;i<5;i++)
    {
    	if((char)a[i]=='5')
    	{
    		cout<<a[i]<<endl;
    	} 
    	else
    	{
    		cout<<"Fail"<<endl;
    	}
    }
	return 0;
}