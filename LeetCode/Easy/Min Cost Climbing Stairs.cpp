class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int sz = cost.size();
        vector <int> dp (sz);
        dp[0]=cost[0];
        dp[1]=cost[1];
        int i;
        for(i=2; i<sz; i++){
            dp[i]=min(dp[i-1],dp[i-2])+cost[i];
        }
        return min(dp[sz-1],dp[sz-2]);
    }
};