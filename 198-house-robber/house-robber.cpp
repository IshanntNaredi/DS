class Solution {
public:
    int helper(int i,vector<int>& nums,vector<int> &dp){
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int rob=nums[i]+helper(i+2,nums,dp);
        int skip=helper(i+1,nums,dp);
        dp[i]=max(rob,skip);

        return dp[i];
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return helper(0,nums,dp);
    }
};