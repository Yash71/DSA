// memoization
int cost(int ind, vector<int>&height,vector<int>&dp){
        if(ind==0) return 0;
        if(dp[ind]!=-1) return dp[ind]; 
        int left = cost(ind-1,height,dp) + abs(height[ind-1]-height[ind]);
        int right = INT_MAX;
        if(ind>1) right = cost(ind-2,height,dp) + abs(height[ind-2]-height[ind]);
        return dp[ind] = min(left,right);
    } 
    int minCost(vector<int>& height) {
        // vector<int>dp(height.size()+1,-1);
      // tabulation
        vector<int>dp(height.size(),0);
        dp[0] = 0;
        for(int i = 1;i<height.size();i++){
            int fs = dp[i-1] +  abs(height[i-1]-height[i]);
            int ss = INT_MAX;
            if(i>1) ss = dp[i-2] + abs(height[i-2]-height[i]);
            dp[i] = min(fs,ss);
        }
        return dp[height.size()-1];
        // return cost(height.size()-1,height,dp);
    }
