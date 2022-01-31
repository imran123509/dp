class Solution {
    private:
    int func(int ind, vector<int> &num, vector<int>&dp){
        if(ind>=num.size()) return 0;
        if(dp[ind] !=-1) return dp[ind];
        //steal
        int steal=num[ind]+func(ind+2, num, dp);
        // not steal
        int notsteal=func(ind+1, num, dp);
        return dp[ind]=max(steal, notsteal);
    }
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return func(0, nums, dp);
    }
};