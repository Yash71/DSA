#include<iostream>
using namespace std;
/* given
	n : no. of vertices
	vector<int>adj[] : a graph
*/
void dfs(int node,vector<int> adj[],int vis[], vector<int> &ls){
	vis[node]=1;
	ls.push_back(node);
	for(auto it: adj[node])}
		if(!vis[it]) dfs(it, adj,vis, ls);
	}
}
int main(){
	int vis[n]={0};
	vector<int> ls;
	int start=0;
	dfs(start,adj,vis,ls);
	return ls;
	return 0;
