#include<iostream>
using namespace std;
/*	Question Link: https://www.geeksforgeeks.org/problems/number-of-provinces/1
	Approach: build a visited array and mark every node as 0(not visited), now traverse the visited array and for every unvisited array as 0, call the dfs function 
*/
void dfs(int start,vector<int>adjList[],int vis[]){
	vis[start]=1;
	for(auto it: vis[start]){
		if(!vis[it]) dfs(it, adjList,vis);
	}
}
int main(){
	vector<int>adjList[V];
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			if(adj[i][j]==1 && i!=k){
				adjList[i].push_back(j);
				adjList[j].push_back(i);
			}
		}
	}
	int vis[V]={0};
	int provinces=0;
	for(int i=0;i<V;i++){
		if(!vis[i]){
			provinces++;
			dfs(i,adjList,vis);
		}
	}
	return provinces;
	return 0;
}
