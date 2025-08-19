void paths(vector<vector<int>> &maze,int i, int j, vector<string> &ans, string move, vector<vector<int>>  vis){
        if(i==maze.size()-1 && j==maze[0].size()-1){
            ans.push_back(move);
            return;
        }
        vis[i][j] = 1;
        // down
        if(i+1<maze.size() && !vis[i+1][j] && maze[i+1][j]){
            // vis[i+1][j] = 1;
            paths(maze,i+1,j,ans,move+"D",vis);
            // vis[i+1][j] = 0;
        }
        //right
        if(j+1<maze.size() && !vis[i][j+1] && maze[i][j+1]){
            // vis[i][j+1] = 1;
            paths(maze,i,j+1,ans,move+"R",vis);
            // vis[i][j+1] = 0;
        }
        //up
        if(i-1>=0 && !vis[i-1][j] && maze[i-1][j]){
            // vis[i-1][j] = 1;
            paths(maze,i-1,j,ans,move+"U",vis);
            // vis[i-1][j] = 0;
        }
        //left
        if(j-1>=0 && !vis[i][j-1] && maze[i][j-1]){
            // vis[i][j-1] = 1;
            paths(maze,i,j-1,ans,move+"L",vis);
            // vis[i][j-1] = 0;
        }
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n = maze.size();
        vector<string> ans;
        vector<vector<int>>vis(n,vector<int>(n,0));
        if(maze[0][0]) paths(maze,0,0,ans,"",vis);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
