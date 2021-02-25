#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector <int> adj[];int v,int u)
{
	adj[u].push_back(u);
	adj[v].push_back(v);

}

void printGraph(vector <int> adj[],int v)
{
	for(int v=0;u<v;++v)
	{
		cout<<"Adjacency List of Vertex"<<v<<endl;
		for(auto x:adj[v]){cout<<x;}
			cout<<"\n"<<endl;
	}
} 

int main()
{
	int v=5;
	vector <int> adj[v];
	addEdge(adj,0,1);
	addEdge(adj,0,4);
	addEdge(adj,1,2);
	addEdge(adj,1,3);
	addEdge(adj,1,4);
	addEdge(adj,2,3);
	addEdge(adj,3,4);
	printGraph(adj,v);
	return 0;
}