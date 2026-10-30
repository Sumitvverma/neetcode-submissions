class Solution {
public:
    vector<int>dp;
    int solve(int i,vector<int>&cost){
        if(i>=cost.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int take=cost[i]+solve(i+1,cost);
        int nottake=cost[i]+solve(i+2,cost);
        return dp[i]=min(take,nottake);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        dp.assign(cost.size(),-1);
        return min(solve(0,cost),solve(1,cost));
    }
};
