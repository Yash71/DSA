#include <iostream>
using namespace std;
int memo(int days,int last, vector<vector<int>> points){
    if(days == 0){
        int maxi = 0;
        for(int i = 0;i<3;i++){
            if(i!=last) maxi = max(maxi, points[0][i]);
        }
        return maxi;
    }
    
    if(dp[days][last]!=-1) return dp[days][last];
    int maxi = 0;
    for(int i = 0; i<3; i++){
        int maxi
        if(i!=last){
            int points = points[day][i] + f(days-1,i,points,dp);
            maxi = max(maxi, points);
        }
    }
    return dp[days][last] = maxi;
}

int ninjaTrain(int n,vector<vector<int>>points){
    vector<vector<int>> dp(n,vetor<int>(4,-1));
    memo(n-1,3,points,dp);
}
