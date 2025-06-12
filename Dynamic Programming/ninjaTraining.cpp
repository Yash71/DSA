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
int tab(vector<vector<int>>&arr,vector<vector<int>>&dp){
        dp[0][0] = max(arr[0][1],arr[0][2]);
        dp[0][1] = max(arr[0][0],arr[0][2]);
        dp[0][2] = max(arr[0][1],arr[0][0]);
        dp[0][3] = max(arr[0][1],max(arr[0][0],arr[0][2]));
        for(int day = 1 ;day<arr.size();day++){
            
            for(int last = 0 ; last<4; last++){
                dp[day][last] = 0;
                for(int task = 0; task<3;task++){
                    if(task!=last){
                        int point = arr[day][task] + dp[day-1][task];
                        dp[day][last] = max(point,dp[day][last]);
                    }
                }
            }
        }
        return dp[arr.size()-1][3];
}
int tab_space_opti(vector<vector<int>>&arr){
        vector<int>dp(4,0);
        dp[0] = max(arr[0][1],arr[0][2]);
        dp[1] = max(arr[0][0],arr[0][2]);
        dp[2] = max(arr[0][1],arr[0][0]);
        dp[3] = max(arr[0][1],max(arr[0][0],arr[0][2]));
        for(int day = 1 ;day<arr.size();day++){
            vector<int>temp(4,0);
            for(int last = 0 ; last<4; last++){
                temp[last] = 0;
                for(int task = 0; task<3;task++){
                    if(task!=last){
                        int point = arr[day][task] + dptask];
                        temp[last] = max(point,temp[last]);
                    }
                }
            }
            dp = temp;
        }
        return dp[arr.size()-1][3];
}
int ninjaTrain(int n,vector<vector<int>>points){
    vector<vector<int>> dp(n,vetor<int>(4,-1));
    memo(n-1,3,points,dp);
    tab(arr,dp);
    tab_space_opti(arr,dp);
}
