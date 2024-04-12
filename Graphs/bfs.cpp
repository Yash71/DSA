#include<iostream>
#include<queue>
#include<bfs>
using namespace 
/* given
	n : no. of vertices
	vector<int>adj[] : a graph
*/
int main(){
	int vis[n]={0};
	vis[0]=1;
	queue<int> q;
	q.push(0);
	vector<int>bfs;
	while(!q.empty()){
		int node=q.front();
		q.pop();
		bfs.push_back(node);
		for(auto it:adj[node]){
			if(!vis[it]){
				vis[it]=1;
				q.push(it);
			}
		}
	}
	for(auto it: bfs) cout<<it<<" ";
	return 0;
}

