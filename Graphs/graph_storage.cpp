#include<iostream>
#include<vector>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int arr[n+1][n+1]; // adj matrix
	for(int i=0;i<m;i++)}
		int u,v;
		cin>>u>>v;
		arr[u][v]=1;
		arr[v][u]=1;
	}
	vector<int>adj[n+1]; // adj list
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	return 0;
